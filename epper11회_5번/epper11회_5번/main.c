#include<stdio.h>
int main(){
	int d, n,i,p=0;
	int car[100]={0};
	scanf("%d",&d);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&car[i]);
	}
	for(i=0;i<n;i++){
		if(car[i]%5==d%5){
			p+=1;
			
		}
	}
	printf("%d",p);
}
	