#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <malloc.h>
 
 
int main(void){
    char *p;
    int i=1,size=1000,size2=0;
 
    p=(char *)malloc(sizeof(char)*size);
    printf("[%d], &p : %p,  p : %p,  p에 할당된 공간  :%d bytes , 지금까지 할당된 공간의 크기 : %d bytes \n",i, &p, p, _msize(p), size*i);
    
 
    if(p==NULL){
        printf("메모리할당 오류\n");
		exit(1);
	}
		i++;
		
    
      memset(p,0,sizeof(char)*size);
      printf(" 새로 할당할 크기를 입력하세요.\n");
      scanf("%d",&size2);
      p=(char *)realloc(p,sizeof(char)*size2);
      printf("[%d], &p : %p,  p : %p,  p에 할당된 공간  :%d bytes , 지금까지 할당된 공간의 크기 : %d bytes \n",i, &p, p, _msize(p), size*i);
    
 
    
}
