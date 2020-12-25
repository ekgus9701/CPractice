#include<stdio.h>
int main(){
	int s,e,i,temp,plus=0;
	scanf("%d %d",&s,&e);
	
	for(i=s;i<=e;i++){
		temp=i;
		while(temp!=0){
			
			if(temp%10!=0 && (temp%10)%3==0){
				plus+=1;
				break;
			}
			temp=temp/10;
		}
	}
	printf("%d\n",plus);
}
