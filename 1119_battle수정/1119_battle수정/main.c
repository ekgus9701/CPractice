#pragma once
#include <stdio.h>
#include "Battle.h"
#include <time.h>
#include <stdlib.h>



int main(){
	int random;
	Weapon w1={"�Ҳɰ���",150};
	Weapon w2= {"��������",100};
	
	Player p1={"",&w1,0,0};
	Player p2={"",&w2,0,0};

	acceptInfo(&p1);
	acceptInfo(&p2);
	

	showPlayer(p1);
	showPlayer(p2);

	srand((unsigned)time(NULL));//Ȧ���������� p1����, ¦���� �� �ݴ�
	while(1){
		if(p1.hp<=0 || p2.hp<=0){
			printf("������ �������ϴ�\n");
			break;
		}

		if(rand()%2==1) {
			attack(p1,&p2);
			
		}
		else attack(p2,&p1);
			showPlayer(p1);
			showPlayer(p2);
		}
	getchar();

		
	}

	


