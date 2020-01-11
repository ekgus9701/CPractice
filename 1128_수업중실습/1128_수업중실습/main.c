#pragma once;

#include "Battle.h"
  
int main(){
	Player *p=NULL;
	int a=3;
	char *str="ab";
	Player pp={0};
	//리턴하는 방식
	//str=makeStr(); // _return_address    name공간 할당받고 입력받고 줄이기
	//리턴하지않는 방식
	////makeStr_void(&str);

	//공간할당
	str=(char *)malloc(sizeof(char)*50);
	memset(str,0x0,sizeof(char)*100);

	printf("input name : ");
	scanf("%s",str);
	printf("str: %s \n",str);
	//공간 재할당
	str=(char *)realloc(str,strlen(str)+1);//뒤의 null을 포함해서 세기위해 1을 더함
	printf("str: %s \n",str);

}