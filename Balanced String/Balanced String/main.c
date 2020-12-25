#include<stdio.h>

int main(){
	int n=0,res=1,i=0;
	scanf("%d",&n);

	if(n%2==0){
		n/=2;
	}
	else{
		n=n/2+1;
	}
	n=(int)n;
	for(i=0;i<n;i++){
		res=res*2%16769023;
	}
	printf("%d\n",res);

}