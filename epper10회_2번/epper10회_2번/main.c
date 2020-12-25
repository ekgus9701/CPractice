#include <stdio.h>
int main(){
	int x,y,i;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char *day[7]={"토요일","일요일","월요일","화요일","수요일","목요일","금요일"};
	scanf("%d %d",&x,&y);
	for(i=0;i<x-1;i++){
		y+=month[i];
	}
	printf("%s",day[y%7]);
}