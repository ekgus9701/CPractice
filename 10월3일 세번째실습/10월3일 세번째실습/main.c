#include<stdio.h>
int main(){

	int bit[16]={0};
	int num=0;
	int i;
	printf("���ڸ� �����ּ���.\n");
	scanf("%d",&num);
	printf("0x%p(16����)\n",num);
	printf("0x%x(16����)\n",num);

	for (i=15; i>=0; i--){
		bit[i]=num%2;
		num/=2;
		if(num<1) break;
	
	}
	for (i=0; i<16; i++)
	printf("%d",bit[i]);
}