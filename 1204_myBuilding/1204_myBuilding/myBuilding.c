#pragma once
#include "myBuilding.h"
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

int makeFloors(Person ***building_addr){
	int floor;
    printf("������?: "); scanf("%d", &floor);
    if(floor <=0) return -1;
    *building_addr = (Person **)malloc(sizeof(Person *) * floor);  
    if(*building_addr==NULL) return -1;  
    memset(*building_addr, 0x0, sizeof(Person *) * floor);  
    return floor;    
}

int makeNewFloors(Person ***building_addr,int floor){
	int newFloor;
	printf("�� ������ �����ұ��?:");
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
            printf("��������� \n");
            continue;
        }
		
		for(r=0; r<_msize(*(building+f))/sizeof(Person);r++){
			if(building[f][r].name==NULL)
				printf("��");
			else printf("��");
		}
		printf("\n");
	}
}


int makeRooms_inFloor(Person **building, int floor){
	int i,room=0;
	
	printf("room����(1������ �Է��ϼ���.): ");
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

	printf("���� �Է��ϼ���.: ");
	scanf("%d", &floor);
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
	printf("������? :");
	scanf("%d",&floor);
	printf("�� ��ȣ��? :");
	scanf("%d",&room);

	building[floor-1][room].name=(char *)malloc(sizeof(char)*100);
	memset(building[floor-1][room].name,0x0,sizeof(char)*100);

	printf("%d�� %d ȣ�� ������ ����� �̸��� �Է��ϼ���.\n", floor,room);
	scanf("%s",building[floor][room].name);
	building[floor][room].name=(char *)realloc(building[floor][room].name, sizeof(char) * (strlen(building[floor][room].name)+1));
}

void showMenu(){

	printf("1.�ǹ� ����\n");
	printf("2.�� �����ϱ�\n");
	printf("3.���� �氳�� �����ϱ�\n");
	printf("4.��� ���ֽ�Ű��\n");
	printf("0.����\n");
}