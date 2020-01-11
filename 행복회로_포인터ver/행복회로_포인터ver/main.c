#include<stdio.h>

void sleep(int *행복감, int *포만감, int *피로감){
	int sleeptime;

printf("수면시간은?");

    scanf("%d",&sleeptime);
	*포만감-=sleeptime*15;
	*행복감+=sleeptime*20;
	*피로감-=sleeptime*15;


}



void eat(int *행복감, int *포만감, int *피로감){
	int menu;

	printf("메뉴의 개수는?");

	scanf("%d",&menu);
	*포만감+=menu*30;
	*행복감+=menu*20;
	*피로감+=menu*15;

}



int play(int *행복감, int *포만감, int *피로감){
	int playtime;

	printf("몇시간 놀까?");

	scanf("%d",&playtime);
	*포만감-=25;
	*행복감+=20;
	*피로감+=25;

}



void watch(int *행복감, int *포만감, int *피로감){
	int tv;

	printf("몇개의 프로그램을 볼까?");

	scanf("%d",&tv);
	*포만감-=tv*10;
	*행복감+=tv*20;
	*피로감+=tv*15;

}



void study(int *행복감, int *포만감, int *피로감){
	int subject;

	printf("과제 몇개를 할까?");

	scanf("%d",&subject);
	*포만감-=subject*20;
	*행복감-=subject*30;
	*피로감+=subject*20;
}



void showmenu(){

printf("----------------\n");

printf("0.그만두기\n");

printf("1.잠자기\n");

printf("2.먹기\n");

printf("3.놀기\n");

printf("4.티비보기\n");

printf("5.과제하기\n");}



int main(){
int 피로감=60;

int 포만감=60;

int 행복감=60;

int act;

while (1){

	printf("현재상태는:\n");

	printf("피로감:%d\n포만감:%d\n행복감:%d\n",피로감,포만감,행복감);


	showmenu();



	if(피로감>100){

	printf("휴식이 필요해..\n");

	}

	if(피로감<20){

	printf("에너지 풀충전!\n");

	}	

	if(포만감>100){

	printf("너무 배불러 ㅜㅜ\n");
	}

	if(포만감<20){

	printf("너무 배고파..\n");
	}

	if(행복감>100){
		printf("힐링이야!♥\n");
	}

	if(행복감<20){
		printf("불행해..\n");
	}



	printf("무엇을 할까?\n");



	scanf("%d",&act);

	if(act==0)
		break;


	if(act==1){

		sleep(&행복감,&포만감,&피로감);
	
		}

	if(act==2){

		eat(&행복감,&포만감,&피로감);
		}

	if(act==3){

	    sleep(&행복감,&포만감,&피로감);

		}

	if (act==4){

		watch(&행복감,&포만감,&피로감);
		}

	if (act==5){

		study(&행복감,&포만감,&피로감);
		}

	}

}