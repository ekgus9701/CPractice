#include<stdio.h>
int main(){
	int n=0,k=0,i,s1[1000]={0},s2[1000]={0};
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		s1[i]=i;
	}
	for(i=0;i<n;i++){
		s2[i]=s1[k];
		s1[k]=0;
		k=(k+3)%7;
		printf("%d",s2[i]);

	}
	printf("<");
	for(i=0;i<n;i++)
		printf("%d,",s2[i]);
	




}
