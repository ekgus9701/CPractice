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
	
	Person p;//�ѻ��
	Person par[100];//100���
	Person *pp;//��������𸦋�
	int n=0;
	int i=0,k;

	printf("�ο��� �������?\n");
	scanf("%d���Դϴ�.\n",&n);

	pp=(Person *)malloc(sizeof(Person)*n);
	if(pp==NULL){
		printf("�Ҵ����\n");
		exit(1);
	}

	memset(pp,0,sizeof(Person)*n);

	printf("Person�� ũ��: %dbytes\n",sizeof(Person));
	printf("pp: %p pp�� �Ҵ����ũ��: %dbytes\n",pp,_msize(pp));
	printf("pp�� %d�� �� �� �ִ�.\n",_msize(pp)/sizeof(Person));

	printf("�ο� �����մϴ�. ������� �����ұ��?\n");
	scanf("%d",&n);
	pp=(Person *)realloc(pp,sizeof(Person)*n);
	printf("Person�� ũ��: %dbytes\n",sizeof(Person));
	printf("pp: %p pp�� �Ҵ����ũ��: %dbytes\n",pp,_msize(pp));
	printf("pp�� %d�� �� �� �ִ�.\n",_msize(pp)/sizeof(Person));

	for(i=0; i<n; i++){
		pp[i].name=(char *)malloc(sizeof(char)*100);
		
		printf("[%d] -�̸�: \n",i+1);
		scanf("%s",pp[i].name);

		k= strlen(pp[i].name)+1;
		pp[i].name=(char *)realloc(pp[i].name,k);

		printf("[%d] -����: \n",i+1);
		scanf("%d",&pp[i].age);
	}
	for(i=0; i<n; i++){
		printf("[%d]: %s(%d) %d \n", i+1, pp[i].name, _msize(pp[i].name),pp[i].age);
	}


}


