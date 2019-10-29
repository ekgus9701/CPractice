#include<stdio.h>
int main(){
	int i;
	int j;
	int value;
	
	for (j=1; j<=100; j++){
		value=j%10;
		if(value==5|| value==0)//일의 자리수가 5나 0인경우 짝 출력
			printf("짝!\n");
		else printf("%3d\n",j);
	}
}
