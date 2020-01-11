#pragma once
#include "myBuilding.h"
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

int makeFloors(Person ***building_addr){
	int floor;
    printf("층수는?: "); scanf("%d", &floor);
    if(floor <=0) return -1;
    *building_addr = (Person **)malloc(sizeof(Person *) * floor);  
    if(*building_addr==NULL) return -1;  
    memset(*building_addr, 0x0, sizeof(Person *) * floor);  
    return floor;    
}

int makeNewFloors(Person ***building_addr,int floor){
	int newFloor;
	printf("몇 층으로 변경할까요?:");
	scanf("%d", &newFloor);
	if(newFloor<=0)
		return -1;
	*building_addr = (Person **)realloc(*building_addr,sizeof(Person*)*newFloor);  
    if(*building_addr==NULL) return -1;  
    memset(*building_addr, 0x0, sizeof(Person *) * newFloor);  
    return newFloor;    
}

void showBuilding(Person **building, int floor){
	int f,r;

	for(f=0; f<floor; f++){
        printf("%2d floor : ", f+1);
		if (building[f] == NULL) {
            printf("아직방없음 \n");
            continue;
        }
		
		for(r=0; r<_msize(*(building+f))/sizeof(Person);r++){
			if(building[f][r].name==NULL)
				printf("□");
			else printf("■");
		}
		printf("\n");
	}
}


int makeRooms_inFloor(Person **building, int floor){
	int i,room=0;
	
	printf("room개수(1층부터 입력하세요.): ");
	scanf("%d", &room);
	
	if(room<=0)
		return -1;
	building[floor] = (Person *)malloc(sizeof(Person)*room);
	if(building[floor]==NULL)
		return -1;
	memset(building[floor],0x0,sizeof(Person)*room);
	return 1;
	
}

void changeRooms_inFloor(Person **building){
	int room;
	
	int floor;

	printf("층을 입력하세요.: ");
	scanf("%d", &floor);
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
	printf("층수는? :");
	scanf("%d",&floor);
	printf("방 번호는? :");
	scanf("%d",&room);

	building[floor-1][room].name=(char *)malloc(sizeof(char)*100);
	memset(building[floor-1][room].name,0x0,sizeof(char)*100);

	printf("%d층 %d 호에 입주할 사람의 이름을 입력하세요.\n", floor,room);
	scanf("%s",building[floor][room].name);
	building[floor][room].name=(char *)realloc(building[floor][room].name, sizeof(char) * (strlen(building[floor][room].name)+1));
}

void showMenu(){

	printf("1.건물 보기\n");
	printf("2.층 변경하기\n");
	printf("3.층에 방개수 변경하기\n");
	printf("4.사람 입주시키기\n");
	printf("0.종료\n");
}