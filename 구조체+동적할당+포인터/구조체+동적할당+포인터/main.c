#pragma once
#include <stdio.h>
#include "Battle.h"
#include <time.h>
#include <stdlib.h>

#include <malloc.h>

#include <string.h>
#define 이름길이 100
 
int main(){
	Player *p=NULL;
	Weapon *w=NULL;
	int 인원, 무기개수;
	int i,k;
	int signal;
	int random;
	int fighter1;
	int fighter2;
	Player *killer, *target;

	signal=makePlayers(&p);
	if(signal==NULL){
		printf("인원 할당 작업 실패");
		exit(1);
	}

	인원=_msize(p)/sizeof(Player);
	for(i=0;i<인원;i++){
		setPlayer(&p[i]);
		무기개수=_msize(p[i].w)/sizeof(Weapon);
		for(k=0;k<무기개수;k++){
			setWeapon(&p[i].w[k]);
		}
	}

	show_Players(p,w,인원,무기개수);
	
	srand((unsigned)time(NULL));
	
	fighter1=rand()%인원;
	fighter2=rand()%인원;
	
	while(fighter1==fighter2){//fighter1과 fighter2가 다를때까지 반복
	
		fighter2=rand()%인원;} //fighter 2 다시 랜덤수 형성
	
	
	printf("%s와 %s가 출전합니다.\n",p[fighter1].name,p[fighter2].name); 

	while(1){
        if(p[fighter1].hp<=0 || p[fighter2].hp<=0){
            printf("게임이 끝났습니다\n");
            break;
}
 
        if(rand()%2==1) {
            attack(p[fighter1],&p[fighter2]);
            showPlayer(p[fighter2]);
        }
        else attack(p[fighter2],&p[fighter1]);
            showPlayer(p[fighter1]);
        }
    
 
           getchar();
    }





