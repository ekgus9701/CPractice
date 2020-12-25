#include <stdio.h>

int main(){
	int N[1000000]={0};
	int n;
	int i;
	int min;
	int max;

	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&N[i]);
	}
	min=N[0];
	max=N[0];


	for(i=1;i<n;i++){
		
		if(min>N[i])
			min=N[i];
		if(max<N[i])
			max=N[i];
	}
	printf("%d %d",min,max);
}


	