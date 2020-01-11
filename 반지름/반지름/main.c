#include <stdio.h>


int sleeptime;
int playtime;
int menu;
int subject;
int tv;
int people;

int tired=40;
int full=40;
int happy=40;
int act;

int sleep(){
	printf("수면시간은?");
    scanf("%d",&sleeptime);
	return sleeptime*15;}

int eat(){
	printf("메뉴의 개수는?");
	scanf("%d",&menu);
	return menu*20;}

int play(){
	printf("몇시간 놀까?");
	scanf("%d",&playtime);
	return playtime*20;}

int watch(){
	printf("몇개의 프로그램을 볼까?");
	scanf("%d",&tv);
	return tv*30;}

int study(){
	printf("과제 몇개를 할까?");
	scanf("%d",&subject);
	return subject*30;}

void showmenu(){
	printf("----------------\n");
	printf("0.그만두기\n");
	printf("1.잠자기\n");
	printf("2.먹기\n");
	printf("3.놀기\n");
	printf("4.티비보기\n");
	printf("5.과제하기\n");}

int main(){
	while (1){
		printf("현재상태는:\n");
		printf("피곤함:%d\n배부름:%d\n행복감:%d\n",tired,full,happy);
		
		showmenu();

		if(tired>100){
			printf("휴식이 필요해..\n");
		}
		if(tired<20){
			printf("에너지 풀충전!\n");
		}
		if(full>100){
			printf("너무 배불러 ㅜㅜ\n");}

		printf("무엇을 할까?\n");

		scanf("%d",&act);
		if(act==0){
			break;}
		if(act==1){
			tired-=sleep();
			}
		if(act==2){
			full+=eat();}
		if(act==3){
			happy+=play();
			}
		if (act==4){
			happy+=watch();}
		if (act==5){
			tired+=study();}
	}









}



