#include<stdio.h>

void sleep(int *�ູ��, int *������, int *�Ƿΰ�){
	int sleeptime;

printf("����ð���?");

    scanf("%d",&sleeptime);
	*������-=sleeptime*15;
	*�ູ��+=sleeptime*20;
	*�Ƿΰ�-=sleeptime*15;


}



void eat(int *�ູ��, int *������, int *�Ƿΰ�){
	int menu;

	printf("�޴��� ������?");

	scanf("%d",&menu);
	*������+=menu*30;
	*�ູ��+=menu*20;
	*�Ƿΰ�+=menu*15;

}



int play(int *�ູ��, int *������, int *�Ƿΰ�){
	int playtime;

	printf("��ð� ���?");

	scanf("%d",&playtime);
	*������-=25;
	*�ູ��+=20;
	*�Ƿΰ�+=25;

}



void watch(int *�ູ��, int *������, int *�Ƿΰ�){
	int tv;

	printf("��� ���α׷��� ����?");

	scanf("%d",&tv);
	*������-=tv*10;
	*�ູ��+=tv*20;
	*�Ƿΰ�+=tv*15;

}



void study(int *�ູ��, int *������, int *�Ƿΰ�){
	int subject;

	printf("���� ��� �ұ�?");

	scanf("%d",&subject);
	*������-=subject*20;
	*�ູ��-=subject*30;
	*�Ƿΰ�+=subject*20;
}



void showmenu(){

printf("----------------\n");

printf("0.�׸��α�\n");

printf("1.���ڱ�\n");

printf("2.�Ա�\n");

printf("3.���\n");

printf("4.Ƽ�񺸱�\n");

printf("5.�����ϱ�\n");}



int main(){
int �Ƿΰ�=60;

int ������=60;

int �ູ��=60;

int act;

while (1){

	printf("������´�:\n");

	printf("�Ƿΰ�:%d\n������:%d\n�ູ��:%d\n",�Ƿΰ�,������,�ູ��);


	showmenu();



	if(�Ƿΰ�>100){

	printf("�޽��� �ʿ���..\n");

	}

	if(�Ƿΰ�<20){

	printf("������ Ǯ����!\n");

	}	

	if(������>100){

	printf("�ʹ� ��ҷ� �̤�\n");
	}

	if(������<20){

	printf("�ʹ� �����..\n");
	}

	if(�ູ��>100){
		printf("�����̾�!��\n");
	}

	if(�ູ��<20){
		printf("������..\n");
	}



	printf("������ �ұ�?\n");



	scanf("%d",&act);

	if(act==0)
		break;


	if(act==1){

		sleep(&�ູ��,&������,&�Ƿΰ�);
	
		}

	if(act==2){

		eat(&�ູ��,&������,&�Ƿΰ�);
		}

	if(act==3){

	    sleep(&�ູ��,&������,&�Ƿΰ�);

		}

	if (act==4){

		watch(&�ູ��,&������,&�Ƿΰ�);
		}

	if (act==5){

		study(&�ູ��,&������,&�Ƿΰ�);
		}

	}

}