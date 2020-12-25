#include<stdio.h>
int factorial(int d){
	if(d==1)
		return 1;

	return d*factorial(d-1);
}

int main(){
	int d;
	printf("양의 정수를 입력하시오:");
	scanf("%d",&d);
	
	printf("%d! = %d입니다.",d,factorial(d));
}
