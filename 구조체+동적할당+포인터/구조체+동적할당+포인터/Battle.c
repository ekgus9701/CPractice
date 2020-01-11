#pragma once
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include "DataType.h"
 
#define �̸����� 100
int get_number(char *str){
	int size;
	printf("%s: ",str);
	scanf("%d", &size);
	return size;
}

int makePlayers(Player **p_addr){
	int size;

	size=get_number("�÷��̾�� ���?");
	*p_addr = (Player *)malloc(sizeof(Player)*size);
	if(*p_addr==NULL){
		printf("�Ҵ� ���� \n");
		return -1;
	}
	return 1;
}

int *makeWeapons(Weapon **w_addr){
	int size;
	size=get_number("������ ������?;");
	*w_addr=(Weapon *)malloc(sizeof(Weapon) *size);
}

int makeName(char **name_addr){
	*name_addr = (char*) malloc(sizeof(char)*�̸�����);
}

void setPlayer(Player *p){
	int size;

	printf("==set player==\n");
	makeName(&p->name);
	printf("�̸�: ");
	scanf("%s",p->name);
	p->name = (char *)realloc(p->name,strlen(p->name)+1);
	p->power = get_number("power");
	p->hp=get_number("hp");

	makeWeapons(&(p->w));
}

void setWeapon(Weapon *p){

	printf("==set weapon==\n");
	makeName(&p->name);
	printf("�����̸�:");
	scanf("%s",p->name);
	p->name=(char *)realloc(p->name,strlen(p->name)+1);
	p->power = get_number("power");
}

void show_Players(Player *p,Weapon *w, int �ο�, int ���ⰳ��){
	int i;
	int k;
	int fp=0;
	for(i=0; i<�ο�; i++){
		
		printf("===========================\n");
		printf("�̸� : %s power : %d hp : %d \n",p[i].name,p[i].power,p[i].hp);
		fp+=p[i].power;
		���ⰳ��=_msize(p[i].w)/sizeof(Weapon);
		printf("*****��������***** \n");
		for( k=0;k<���ⰳ��;k++){
			printf("%s   %d  \n", p[i].w[k].name,p[i].w[k].power);
			fp+=p[i].w[k].power;
		}
		printf("���Ŀ�: %d\n", fp);
		fp=0;
	}
}
 
void attack(Player hunter,Player *target){
    int power = hunter.power+hunter.w->power;
    target->hp-=power;
    printf("%s�� %s�� �����մϴ�.\n",hunter.name,target->name);
}
void showPlayer(Player p){
    printf("�÷��̾� �̸�: %s \n", p.name);
    printf("�÷��̾� �Ŀ�: %d \n", p.power);
    printf("�÷��̾� ü��: %d \n", p.hp);
    printf("=====================================\n");
 
}
