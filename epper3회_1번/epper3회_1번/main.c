#include<stdio.h>
int main(){
	int a,b,c;
	printf("3개의 정수를 입력하시오 :");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c)
			printf("%d",a);
		if(c>a)
			printf("%d",c);

	}
	if(b>a){
		if(c>b)
			printf("%d",c);
		if(b>c)
			printf("%d",b);
	}
}
