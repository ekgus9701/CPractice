#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

 
typedef struct person {
char* name;
int age;
}Person;

int makeFloors(Person ***bld_addr){
    int floor;
    printf("몇층으로 건물을 지을까요?\n : "); scanf("%d", &floor);
    if(floor <=0) return -1;
    *bld_addr = (Person **)malloc(sizeof(Person *) * floor);  
    if(*bld_addr==NULL) return -1;  
    memset(*bld_addr, 0x0, sizeof(Person *) * floor); 
    return floor;    
}
 
void showBuilding(Person **bld, int floor){ 
    int f,r;
 
    for(f=0; f<floor; f++){
        printf("%d floor : ", f+1);
     
		if(bld[f]==NULL){ 
             printf("아직방없음 \n");
             continue;
        }
         
        for(r=0; r<_msize(*(bld+f))/sizeof(Person); r++){
            if(bld[f][r].name ==NULL) printf("□");   
            else printf("■");
        }
        printf("\n");
    }
}
 
int makeRooms_inFloor(Person **bld, int floor){
    int room, r;
    printf("%d번째 방 : ", floor+1); scanf("%d", &room);
    if(room <=0) return -1;
    bld[floor] = (Person *)malloc(sizeof(Person) * room);
    if(bld[floor] ==NULL) return -1;
    memset(bld[floor], 0x0, sizeof(Person)*room);        
    return 1;
}
void changeRooms_inFloor(Person **building){
    int room;
    
    int floor;
 
    printf("층을 입력하세요.: ");
    scanf("%d", &floor);
    floor=floor-1;
    if(floor>(_msize(building)/sizeof(Person*))+1){
        printf("층이 없습니다.");
    }
    printf("방 개수를 몇개로 변경하시겠습니까?\n");
    scanf("%d", &room);
    
    building[floor]=(Person *)realloc(building[floor],sizeof(Person)*room);
    memset(building[floor],0x0,sizeof(Person)*room);
    printf("변경완료!\n");
}
 
void getPeople(Person **building){
    int floor,room;
    int n;
	printf("층수는? :");
    scanf("%d",&floor);
    
    printf("방 번호는? :");
    scanf("%d",&room);
 
	floor -=1;
	room -=1;
    building[floor-1][room-1].name=(char *)malloc(sizeof(char)*100);
    memset(building[floor-1][room-1].name,0x0,sizeof(char)*100);
 
	printf("%d층 %d 호에 입주할 사람의 나이를 입력하세요.\n", floor,room);
    scanf("%d",&(building[floor-1][room-1].age));
	
    
    printf("%d층 %d 호에 입주할 사람의 이름을 입력하세요.\n", floor,room);
    scanf("%s",building[floor-1][room-1].name);
	n=strlen(building[floor-1][room-1].name);
	printf("길이 :%d \n", n);

	building[floor-1][room-1].name = (char *)realloc(building[floor-1][room-1].name, n+1);
	
	printf(" 이름 :%s 나이 : %d %d \n", building[floor-1][room-1].name, building[floor-1][room-1].age, _msize(building[floor-1][room-1].name)); 
   
	
}
 
void showPeople(Person** building) {
    int floor, room;
    printf("층수는?  ");
    scanf("%d", &floor);
    printf("방번호는? ");
    scanf("%d", &room);
    //floor=floor-1;
    printf("이름 : %s\n", building[floor-1][room-1].name);
    printf("나이 : %d\n", building[floor-1][room-1].age);
    
}
void showMenu(){
 
    printf("1.건물 보기\n");
    printf("2.층에 방개수 변경하기\n");
    printf("3.사람 입주시키기\n");
    printf("4.어떤 사람이 살고있는지 보기\n");
    printf("0.종료\n");
}
 
 
int main(){
    Person **building = NULL;
   
    int floor, room;
    int i;
    int num;
 
    floor = makeFloors(&building);  
 
    if(floor<=0) {printf("건물짓기 실패"); exit(1);  } 
    
    for(i=0;  i<floor; i++)
        makeRooms_inFloor(building, i);
    
    showBuilding(building, floor);    
     while(1){
        showMenu();
        showBuilding(building, floor);
        printf("번호를 입력하세요.: "); scanf("%d", &num);
        if(num == 0) break;
        if(num == 1)
            showBuilding(building, floor);
        if(num == 2){
            changeRooms_inFloor(building);
        }
       if(num==3){
           getPeople(building);
        }
       if(num==4){
            showPeople(building);
        }
 
    }
}
