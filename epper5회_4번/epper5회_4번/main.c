#include<stdio.h>
int main(){
	int num,n,sum=0;
	printf("���� ������ �Է��Ͻÿ� :");
	scanf("%d",&num);
	
		for(n=1;n<100000;n++){
			sum+=n;
			if(sum>num)
				break;
	}
		printf("%d %d",sum-n,n-1);
}
		

