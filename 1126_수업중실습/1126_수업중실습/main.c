#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

typedef struct person{
	char *name;
	int *age;
}Person;

Person

int main(){
	
	Person p;//한사람
	Person par[100];//100사람
	Person *pp;//몇명인지모를떄
	int n=0;
	int i=0,k;

	printf("인원이 몇명이죠?\n");
	scanf("%d명입니다.\n",&n);

	pp=(Person *)malloc(sizeof(Person)*n);
	if(pp==NULL){
		printf("할당실패\n");
		exit(1);
	}

	memset(pp,0,sizeof(Person)*n);

	printf("Person의 크기: %dbytes\n",sizeof(Person));
	printf("pp: %p pp에 할당받은크기: %dbytes\n",pp,_msize(pp));
	printf("pp에 %d명 들어갈 수 있다.\n",_msize(pp)/sizeof(Person));

	printf("인원 변경합니다. 몇명으로 변경할까요?\n");
	scanf("%d",&n);
	pp=(Person *)realloc(pp,sizeof(Person)*n);
	printf("Person의 크기: %dbytes\n",sizeof(Person));
	printf("pp: %p pp에 할당받은크기: %dbytes\n",pp,_msize(pp));
	printf("pp에 %d명 들어갈 수 있다.\n",_msize(pp)/sizeof(Person));

	for(i=0; i<n; i++){
		pp[i].name=(char *)malloc(sizeof(char)*100);
		
		printf("[%d] -이름: \n",i+1);
		scanf("%s",pp[i].name);

		k= strlen(pp[i].name)+1;
		pp[i].name=(char *)realloc(pp[i].name,k);

		printf("[%d] -나이: \n",i+1);
		scanf("%d",&pp[i].age);
	}
	for(i=0; i<n; i++){
		printf("[%d]: %s(%d) %d \n", i+1, pp[i].name, _msize(pp[i].name),pp[i].age);
	}


}


