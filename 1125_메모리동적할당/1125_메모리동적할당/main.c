#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <malloc.h>
 
 
int main(void){
    char *p;
    int i=1,size=1000,size2=0;
 
    p=(char *)malloc(sizeof(char)*size);
    printf("[%d], &p : %p,  p : %p,  p�� �Ҵ�� ����  :%d bytes , ���ݱ��� �Ҵ�� ������ ũ�� : %d bytes \n",i, &p, p, _msize(p), size*i);
    
 
    if(p==NULL){
        printf("�޸��Ҵ� ����\n");
		exit(1);
	}
		i++;
		
    
      memset(p,0,sizeof(char)*size);
      printf(" ���� �Ҵ��� ũ�⸦ �Է��ϼ���.\n");
      scanf("%d",&size2);
      p=(char *)realloc(p,sizeof(char)*size2);
      printf("[%d], &p : %p,  p : %p,  p�� �Ҵ�� ����  :%d bytes , ���ݱ��� �Ҵ�� ������ ũ�� : %d bytes \n",i, &p, p, _msize(p), size*i);
    
 
    
}
