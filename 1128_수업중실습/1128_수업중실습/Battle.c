#include <stdio.h>
#include "Battle.h"
#define STR_MAX 100

char *makeStr(){

	char *str=(char *)malloc(sizeof(char)*STR_MAX);
	if(str==NULL){
		printf("�Ҵ����!\n");
		exit(1);
	}
	memset(str,0x0,sizeof(char)*STR_MAX);

	//�̸��ޱ�

	printf("�̸�: ");
	scanf("%s",str);

	//ũ������
	str=(char *)realloc(str,strlen(str)+1);

	return str;

}


