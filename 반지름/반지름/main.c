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
	printf("����ð���?");
    scanf("%d",&sleeptime);
	return sleeptime*15;}

int eat(){
	printf("�޴��� ������?");
	scanf("%d",&menu);
	return menu*20;}

int play(){
	printf("��ð� ���?");
	scanf("%d",&playtime);
	return playtime*20;}

int watch(){
	printf("��� ���α׷��� ����?");
	scanf("%d",&tv);
	return tv*30;}

int study(){
	printf("���� ��� �ұ�?");
	scanf("%d",&subject);
	return subject*30;}

void showmenu(){
	printf("----------------\n");
	printf("0.�׸��α�\n");
	printf("1.���ڱ�\n");
	printf("2.�Ա�\n");
	printf("3.���\n");
	printf("4.Ƽ�񺸱�\n");
	printf("5.�����ϱ�\n");}

int main(){
	while (1){
		printf("������´�:\n");
		printf("�ǰ���:%d\n��θ�:%d\n�ູ��:%d\n",tired,full,happy);
		
		showmenu();

		if(tired>100){
			printf("�޽��� �ʿ���..\n");
		}
		if(tired<20){
			printf("������ Ǯ����!\n");
		}
		if(full>100){
			printf("�ʹ� ��ҷ� �̤�\n");}

		printf("������ �ұ�?\n");

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



