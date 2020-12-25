#include<stdio.h>
int main(){
	int num,n,sum=0;
	printf("양의 정수를 입력하시오 :");
	scanf("%d",&num);
	
		for(n=1;n<100000;n++){
			sum+=n;
			if(sum>num)
				break;
	}
		printf("%d %d",sum-n,n-1);
}
		

