#include<stdio.h>
int main(){
	int n,k,i,j,up=1,down1=1,down2=1;
	scanf("%d %d",&n,&k);
	
	for(i=n;i>0;i--)
		up=up*i;

	printf("%d\n",up);
		
	
	for(i=k;i>0;i--){
		down1=down1*i;}

	j=n-k;
	for(i=j;i>0;i--){
		down2=down2*i;}

	

	printf("%d",up/(down1*down2));
	



}