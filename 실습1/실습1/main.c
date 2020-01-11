#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#define SIZE 20





int main(){
	int grade[SIZE];
	int i;

	
	printf("5명의점수는\n");

	for(i=0; i<SIZE; i++)
		
		scanf("%d",&grade[i]);
	for (i=0; i<SIZE; i++)
		printf("grade[%d]=%d\n,i,grade[i]");
	
	return 0;




	
}