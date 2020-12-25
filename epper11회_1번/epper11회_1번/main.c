#include<stdio.h>
int main(){
	int n,i,j,k;
	int p[10000]={0};
	int sum=0;
	scanf("%d",&n);
	scanf("%d",&i);
	scanf("%d",&j);
	for(k=0;k<n;k++){
		scanf("%d",&p[k]);
	}
	for(k=i-1;k<j;k++){
		sum+=p[k];
		
	}
	printf("%d",sum);
}



	

