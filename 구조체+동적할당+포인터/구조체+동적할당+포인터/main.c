#pragma once
#include <stdio.h>
#include "Battle.h"
#include <time.h>
#include <stdlib.h>

#include <malloc.h>

#include <string.h>
#define �̸����� 100
 
int main(){
	Player *p=NULL;
	Weapon *w=NULL;
	int �ο�, ���ⰳ��;
	int i,k;
	int signal;
	int random;
	int fighter1;
	int fighter2;
	Player *killer, *target;

	signal=makePlayers(&p);
	if(signal==NULL){
		printf("�ο� �Ҵ� �۾� ����");
		exit(1);
	}

	�ο�=_msize(p)/sizeof(Player);
	for(i=0;i<�ο�;i++){
		setPlayer(&p[i]);
		���ⰳ��=_msize(p[i].w)/sizeof(Weapon);
		for(k=0;k<���ⰳ��;k++){
			setWeapon(&p[i].w[k]);
		}
	}

	show_Players(p,w,�ο�,���ⰳ��);
	
	srand((unsigned)time(NULL));
	
	fighter1=rand()%�ο�;
	fighter2=rand()%�ο�;
	
	while(fighter1==fighter2){//fighter1�� fighter2�� �ٸ������� �ݺ�
	
		fighter2=rand()%�ο�;} //fighter 2 �ٽ� ������ ����
	
	
	printf("%s�� %s�� �����մϴ�.\n",p[fighter1].name,p[fighter2].name); 

	while(1){
        if(p[fighter1].hp<=0 || p[fighter2].hp<=0){
            printf("������ �������ϴ�\n");
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





