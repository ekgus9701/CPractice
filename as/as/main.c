#include<stdio.h>
#define N 32
int main(){
    int j=0,input=0,k=0;
    int bit[N]={0};
    printf("10진수를 입력하세요\n");
    scanf("%d",&input);
    printf("16진수는 0x%p\n",input);
    
    for (j=N-1; j>=0; j--){
            bit[j]=input%2;
            input/=2;    
            
    }
        
        
        for (k=0; k<N; k++){
            printf("%d", bit[k]);
        }    
 
 
    }