#pragma once
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include "DataType.h"
 
#define 이름길이 100
int get_number(char *str){
	int size;
	printf("%s: ",str);
	scanf("%d", &size);
	return size;
}

int makePlayers(Player **p_addr){
	int size;

	size=get_number("플레이어는 몇명?");
	*p_addr = (Player *)malloc(sizeof(Player)*size);
	if(*p_addr==NULL){
		printf("할당 실패 \n");
		return -1;
	}
	return 1;
}

int *makeWeapons(Weapon **w_addr){
	int size;
	size=get_number("무기의 개수는?;");
	*w_addr=(Weapon *)malloc(sizeof(Weapon) *size);
}

int makeName(char **name_addr){
	*name_addr = (char*) malloc(sizeof(char)*이름길이);
}

void setPlayer(Player *p){
	int size;

	printf("==set player==\n");
	makeName(&p->name);
	printf("이름: ");
	scanf("%s",p->name);
	p->name = (char *)realloc(p->name,strlen(p->name)+1);
	p->power = get_number("power");
	p->hp=get_number("hp");

	makeWeapons(&(p->w));
}

void setWeapon(Weapon *p){

	printf("==set weapon==\n");
	makeName(&p->name);
	printf("무기이름:");
	scanf("%s",p->name);
	p->name=(char *)realloc(p->name,strlen(p->name)+1);
	p->power = get_number("power");
}

void show_Players(Player *p,Weapon *w, int 인원, int 무기개수){
	int i;
	int k;
	int fp=0;
	for(i=0; i<인원; i++){
		
		printf("===========================\n");
		printf("이름 : %s power : %d hp : %d \n",p[i].name,p[i].power,p[i].hp);
		fp+=p[i].power;
		무기개수=_msize(p[i].w)/sizeof(Weapon);
		printf("*****보유무기***** \n");
		for( k=0;k<무기개수;k++){
			printf("%s   %d  \n", p[i].w[k].name,p[i].w[k].power);
			fp+=p[i].w[k].power;
		}
		printf("총파워: %d\n", fp);
		fp=0;
	}
}
 
void attack(Player hunter,Player *target){
    int power = hunter.power+hunter.w->power;
    target->hp-=power;
    printf("%s가 %s를 공격합니다.\n",hunter.name,target->name);
}
void showPlayer(Player p){
    printf("플레이어 이름: %s \n", p.name);
    printf("플레이어 파워: %d \n", p.power);
    printf("플레이어 체력: %d \n", p.hp);
    printf("=====================================\n");
 
}
