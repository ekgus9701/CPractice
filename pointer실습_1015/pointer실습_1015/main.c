#include <stdio.h>
 
int main(){
 
    char c='A';
    char *p_ch = &c;
    int i=10;
    int *p_i=&i;
    char str[10]="abc";
 
 
    printf("      주소   변수명  변수값   타입  크기     * \n");
    printf("-----------------------------------------------------\n");
    printf(" %8p    c  %8c      char  %d bytes  \n", &c, c, sizeof(c));
    printf(" %8p p_ch  %8p    char *  %d bytes   %c \n", &p_ch, p_ch, sizeof(p_ch), *p_ch);
    printf(" %8p    i  %8d       int  %d bytes  \n", &i, i, sizeof(i));
    printf(" %8p  p_i  %8p     int *  %d bytes   %d \n", &p_i, p_i, sizeof(p_i), *p_i);
 
 
    // 배열
    printf("\n\n");
    printf(" str 의 주소 :  %p,  str의 값 %p,   str의 크기 : %d \n", &str, str, sizeof(str));
 
    for(i=9; i>=0; i--){
        printf(" %8d  str[%d]  %8c       int  %d bytes  \n", &str[i], i, str[i],   sizeof(str[i]));
    
    }
 
 
 
 
 
 
}






