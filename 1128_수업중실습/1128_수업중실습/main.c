#pragma once;

#include "Battle.h"
  
int main(){
	Player *p=NULL;
	int a=3;
	char *str="ab";
	Player pp={0};
	//�����ϴ� ���
	//str=makeStr(); // _return_address    name���� �Ҵ�ް� �Է¹ް� ���̱�
	//���������ʴ� ���
	////makeStr_void(&str);

	//�����Ҵ�
	str=(char *)malloc(sizeof(char)*50);
	memset(str,0x0,sizeof(char)*100);

	printf("input name : ");
	scanf("%s",str);
	printf("str: %s \n",str);
	//���� ���Ҵ�
	str=(char *)realloc(str,strlen(str)+1);//���� null�� �����ؼ� �������� 1�� ����
	printf("str: %s \n",str);

}