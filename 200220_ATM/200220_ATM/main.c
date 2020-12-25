#include<stdio.h>
int main(){
	int N;
	int i,j;
	int number[1000]={0};
	int temp;
	int sum=0;

	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&number[i]);
	}
	
	for(i=0;i<N-1;i++) {
		for(j=0;j<N-i-1;j++) {
                if(number[j]>number[j+1]) {
                    temp = number[j];
                    number[j] = number[j+1];
                    number[j+1] = temp;
			}
		}
	}
		for(i=0;i<N;i++){
			sum+=number[i]*(N-i);}
		
	printf("%d",sum);
}
