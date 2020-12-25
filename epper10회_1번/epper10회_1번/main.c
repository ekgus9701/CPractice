#include<stdio.h>
int main(){
	int n,i,k;
	scanf("%d",&n);
	
		for(i=1;i<=10000;i++){
			k=6*i;
			if(k<=n)
				printf("%d ",k);
			else break;
		}
	}