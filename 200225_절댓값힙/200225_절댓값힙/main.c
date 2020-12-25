#include<stdio.h>

void sum(int N){
	int n[12];
	int i;
	n[0]=n[1]=1;
	n[2]=2;
	n[3]=4;
	if(N<4){
		printf("%d\n",n[N]);
		return;
	}
	else{
		for(i=4;i<=N;i++)
			n[i]=n[i-1]+n[i-2]+n[i-3];
	}
	printf("%d\n",n[N]);
}
int main()
{
	int N;
	int num;
	int i;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&num);
		sum(num);
	}
}
