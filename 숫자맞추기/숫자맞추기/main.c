#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num;
	int answer;
	srand((unsigned) time(NULL));
	num = rand()%10000;
	while(1){
	printf("���� �Է��ϼ���.\n");
	scanf("%d",&answer);
	if(num>answer)
		printf("�� ū ���� �Է��ϼ���.\n");
	if(num<answer)
		printf("�� ���� ���� �Է��ϼ���.\n");
	if(num==answer) 
		
	    printf("�¾ҽ��ϴ�! �����մϴ�!\n");
	    
	    
	}
}


	
