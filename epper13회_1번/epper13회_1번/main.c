#include<stdio.h>
int main(){
	int n;
	int i;
	int sum=0;
	int k[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k[i]);
	}
	for(i=0;i<n;i++){
		if(k[i]&1){
			sum+=k[i];
		}
	}
	printf("%d",sum);
}

