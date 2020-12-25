#include<stdio.h>
int main(){
	int num,i;
	int result[20];
	int sum=0;
	scanf("%d",&num);

	for(i=0;num>0;i++){
		result[i]=num%2;
		num/=2;
	}
	for(i=0;i<20;i++){
	if(result[i]==1)
		sum+=1;
	}
	printf("%d",sum);
	
}



