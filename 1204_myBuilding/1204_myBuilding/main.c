#pragma once
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>
#include "myBuilding.h"


int main(){
    Person **building = NULL; 
    
    int floor=0, room;
    int i;
    int name;
    int num;
    
    floor = makeFloors(&building);
    if(floor <= 0){
        printf("건물짓기 실패\n"); 
        exit(1);
    }
	for(i = 0; i<floor; i++){
        makeRooms_inFloor(building, floor);
    }
      
    
    
    while(1){
        showMenu();
        showBuilding(building, floor);
        printf("메뉴를 입력하세요.: "); scanf("%d", &num);
        if(num == 0) break;
        if(num == 1)
            showBuilding(building, floor);
        if(num == 2){
            makeNewFloors(&building);
        }
        if(num == 3){
            changeRooms_inFloor(building, floor);
        }
       if(num==4){
		   getPeople(building);
        }

    }
}