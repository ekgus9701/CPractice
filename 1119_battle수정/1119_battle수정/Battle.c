#pragma once
#include <stdio.h>
#include "DataType.h"


void showPlayer(Player p){
	printf("�÷��̾� �̸�: %s \n", p.name);
	printf("�÷��̾� �Ŀ�: %d \n", p.power);
	printf("�÷��̾� ü��: %d \n", p.hp);
	printf("=====================================\n");

}

void attack(Player hunter,Player *target){
	int power = hunter.power+hunter.w->power;
	target->hp-=power;
	printf("%s�� %s�� �����մϴ�.\n",hunter.name,target->name);
}

void acceptInfo(Player *p){

	printf("�÷��̾��� �̸��� �Է��ϼ���.\n");
	scanf("%s",p->name);
	printf("�÷��̾��� �Ŀ��� �Է��ϼ���.\n");
	scanf("%d",&(p->power));
	printf("�÷��̾��� HP�� �Է��ϼ���.\n");
	scanf("%d",&(p->hp));
	
	printf("=================================\n");

}

