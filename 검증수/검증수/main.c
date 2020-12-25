#include<stdio.h>
int main(){
	int s[5]={0},i,sum=0,num;
	for(i=0;i<5;i++){
		scanf("%d",&s[i]);
		sum+=s[i]*s[i];
	}

	num=sum%10;
	printf("%d",num);




}