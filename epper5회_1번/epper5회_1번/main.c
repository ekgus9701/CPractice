#include<stdio.h>
int factorial(int d){
	if(d==1)
		return 1;

	return d*factorial(d-1);
}

int main(){
	int d;
	printf("���� ������ �Է��Ͻÿ�:");
	scanf("%d",&d);
	
	printf("%d! = %d�Դϴ�.",d,factorial(d));
}
