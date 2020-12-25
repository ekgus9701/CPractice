#include<stdio.h>
int main(){
	int n,i=2;
	scanf("%d",&n);

	if(n==1){
		printf("0\n");
	}
	while(1){
		if(i<=n-1){
			if(n%i==0){
				printf("0");
				break;
			}
			else{
				i++;
			}
		}
		else{
			printf("1");
			break;
		}
	}
}


