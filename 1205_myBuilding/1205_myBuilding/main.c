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
    printf("�������� �ǹ��� �������?\n : "); scanf("%d", &floor);
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
             printf("��������� \n");
             continue;
        }
         
        for(r=0; r<_msize(*(bld+f))/sizeof(Person); r++){
            if(bld[f][r].name ==NULL) printf("��");   
            else printf("��");
        }
        printf("\n");
    }
}
 
int makeRooms_inFloor(Person **bld, int floor){
    int room, r;
    printf("%d��° �� : ", floor+1); scanf("%d", &room);
    if(room <=0) return -1;
    bld[floor] = (Person *)malloc(sizeof(Person) * room);
    if(bld[floor] ==NULL) return -1;
    memset(bld[floor], 0x0, sizeof(Person)*room);        
    return 1;
}
void changeRooms_inFloor(Person **building){
    int room;
    
    int floor;
 
    printf("���� �Է��ϼ���.: ");
    scanf("%d", &floor);
    floor=floor-1;
    if(floor>(_msize(building)/sizeof(Person*))+1){
        printf("���� �����ϴ�.");
    }
    printf("�� ������ ��� �����Ͻðڽ��ϱ�?\n");
    scanf("%d", &room);
    
    building[floor]=(Person *)realloc(building[floor],sizeof(Person)*room);
    memset(building[floor],0x0,sizeof(Person)*room);
    printf("����Ϸ�!\n");
}
 
void getPeople(Person **building){
    int floor,room;
    int n;
	printf("������? :");
    scanf("%d",&floor);
    
    printf("�� ��ȣ��? :");
    scanf("%d",&room);
 
	floor -=1;
	room -=1;
    building[floor-1][room-1].name=(char *)malloc(sizeof(char)*100);
    memset(building[floor-1][room-1].name,0x0,sizeof(char)*100);
 
	printf("%d�� %d ȣ�� ������ ����� ���̸� �Է��ϼ���.\n", floor,room);
    scanf("%d",&(building[floor-1][room-1].age));
	
    
    printf("%d�� %d ȣ�� ������ ����� �̸��� �Է��ϼ���.\n", floor,room);
    scanf("%s",building[floor-1][room-1].name);
	n=strlen(building[floor-1][room-1].name);
	printf("���� :%d \n", n);

	building[floor-1][room-1].name = (char *)realloc(building[floor-1][room-1].name, n+1);
	
	printf(" �̸� :%s ���� : %d %d \n", building[floor-1][room-1].name, building[floor-1][room-1].age, _msize(building[floor-1][room-1].name)); 
   
	
}
 
void showPeople(Person** building) {
    int floor, room;
    printf("������?  ");
    scanf("%d", &floor);
    printf("���ȣ��? ");
    scanf("%d", &room);
    //floor=floor-1;
    printf("�̸� : %s\n", building[floor-1][room-1].name);
    printf("���� : %d\n", building[floor-1][room-1].age);
    
}
void showMenu(){
 
    printf("1.�ǹ� ����\n");
    printf("2.���� �氳�� �����ϱ�\n");
    printf("3.��� ���ֽ�Ű��\n");
    printf("4.� ����� ����ִ��� ����\n");
    printf("0.����\n");
}
 
 
int main(){
    Person **building = NULL;
   
    int floor, room;
    int i;
    int num;
 
    floor = makeFloors(&building);  
 
    if(floor<=0) {printf("�ǹ����� ����"); exit(1);  } 
    
    for(i=0;  i<floor; i++)
        makeRooms_inFloor(building, i);
    
    showBuilding(building, floor);    
     while(1){
        showMenu();
        showBuilding(building, floor);
        printf("��ȣ�� �Է��ϼ���.: "); scanf("%d", &num);
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
