#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void showarray(int ar[]){

	int i;

	for(i=0; i<SIZE; i++)
		printf("ar[%d] : %d \n",i,ar[i]);
}

void inputarray(int ar[]){
	int i;

	for (i=0; i<SIZE; i++){
		printf("ar[%d] :", i);
		scanf("%d",&ar[i]);
	}
}

void makerandom(int ar[]){
	int i;

	srand(time(NULL));

	for(i=0; i<SIZE; i++){
		ar[i]=rand();
	}
}

int main(){
	int num[SIZE]={0};

	printf("==�迭 ���==\n");
	showarray(num);

	printf("==�Է°� ���==\n");
	inputarray(num);
	showarray(num);

	printf("==������ ����� ���==\n");
	makerandom(num);
	showarray(num);
}
