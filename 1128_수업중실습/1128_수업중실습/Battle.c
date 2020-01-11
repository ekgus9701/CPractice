#include <stdio.h>
#include "Battle.h"
#define STR_MAX 100

char *makeStr(){

	char *str=(char *)malloc(sizeof(char)*STR_MAX);
	if(str==NULL){
		printf("할당실패!\n");
		exit(1);
	}
	memset(str,0x0,sizeof(char)*STR_MAX);

	//이름받기

	printf("이름: ");
	scanf("%s",str);

	//크기조정
	str=(char *)realloc(str,strlen(str)+1);

	return str;

}


