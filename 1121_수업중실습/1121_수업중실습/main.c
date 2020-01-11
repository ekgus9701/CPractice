#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>


int main(){
	int *pi=NULL;
	int size=10000000;
	unsigned int i,c=0,total=0;

	printf("    &p    p    *p    \n");
	while(1){

		

		pi = (int *)malloc(sizeof(int)*size);
		if(pi==NULL) break;
		//memset(pi,NULL,sizeof(int)*size);
		memset(pi,0x0,sizeof(int)*size);
		total+=_msize(pi);
			
		printf("[%d]할당 후 \n",c);
		printf("  %p   %p     \n",  &pi,  pi);
		printf("할당받은 크기: %d\n",_msize(pi));
		printf("==================================\n");
		c++;
	}
}
