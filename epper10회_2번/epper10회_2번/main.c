#include <stdio.h>
int main(){
	int x,y,i;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char *day[7]={"�����","�Ͽ���","������","ȭ����","������","�����","�ݿ���"};
	scanf("%d %d",&x,&y);
	for(i=0;i<x-1;i++){
		y+=month[i];
	}
	printf("%s",day[y%7]);
}