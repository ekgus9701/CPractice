#include<stdio.h>

int main(){
	int data[100000]={0};
	int N;
	int max=0;
	int i=0;
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&data[i]);
	}
	
	for (i = 0; i < N; i++) {
        if (data[i] > max) {
            max = data[i];
        }
	
	}
	printf("%d",max);
}



