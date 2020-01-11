#pragma once
#include <stdio.h>
#include "DataType.h"


void showPlayer(Player p){
	printf("플레이어 이름: %s \n", p.name);
	printf("플레이어 파워: %d \n", p.power);
	printf("플레이어 체력: %d \n", p.hp);
	printf("=====================================\n");

}

void attack(Player hunter,Player *target){
	int power = hunter.power+hunter.w->power;
	target->hp-=power;
	printf("%s가 %s를 공격합니다.\n",hunter.name,target->name);
}

void acceptInfo(Player *p){

	printf("플레이어의 이름을 입력하세요.\n");
	scanf("%s",p->name);
	printf("플레이어의 파워를 입력하세요.\n");
	scanf("%d",&(p->power));
	printf("플레이어의 HP를 입력하세요.\n");
	scanf("%d",&(p->hp));
	
	printf("=================================\n");

}

