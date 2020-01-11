#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
 
void show(int ar[], int size){
    int i=0;
    for(i=0; i<size; i++)
        printf("%2d   ",ar[i]);
    printf("\n");
}
int 중복확인(int ar[],int size,int p){
 int k=0;
 int j;
 int a=0; 
 for(j=0;j<size-1;j++){
  if(ar[j]==p){
	  break;
  }
  if(ar[j]!=p) a+=1;
 }
 if(a==size-1) return 1;
 else return -1;
}


//난수만들기
void make_numbers(int nar[], int size){
    int i=0,j,k;
    srand((unsigned)time(NULL));
	nar[0]=rand()%100;
 while(i<size-1){
  k=rand()%100;
  j=중복확인(nar,size,k);
  if(j<0){
	  continue;
  }
  else {
	  nar[i]=k; i++;
  }
 }
	
    
}
//swap함수
void swap(int *p,int *q){
        int tmp;
 
        tmp=*p;
        *p=*q;
        *q=tmp;
    }
 
//오름차순정렬
void bubble(int ar[],int size){
    int scan,i;
 
    for(scan=0; scan<size; scan++){
        printf("[%2d]:",scan);
        for(i=0;i<size-1;i++){
            if(ar[i]>ar[i+1]) swap(&ar[i],&ar[i+1]);
        }
            show(ar,size);
        
    }
}
//내림차순정렬
void bubble_r(int ar[],int size){
    int scan,i;
 
    for(scan=0; scan<size; scan++){
        printf("[%2d]:",scan);
        for(i=size-1;i>0;i--){
            if(ar[i]>ar[i-1]) swap(&ar[i],&ar[i-1]);
        }
            show(ar,size);
        
    }
}