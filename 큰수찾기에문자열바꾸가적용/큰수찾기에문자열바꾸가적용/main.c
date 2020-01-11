#include<stdio.h>

#define MAX 9

int get_only_number(char str[],int length){
	int i=0;
	char c;

	while(1){
		scanf("%c",&c);
		if (c== '\n') break;
		if(i>=length) {
			printf("자리수 초과!");
			return -1;
		}
		if(c>='0' && c<='9') str[i++]=c;
		else{
			printf("%c: 수가 아닌 문자입니다. \n",c);
			return -2;
		}
	}
	str[i]='\0';

	return i;
}

int power(int base,int exp){

	int i;
	int value=1;

	for(i=0;i<exp; i++)
		value*=base;
	return value;
}

void flush(){
	char c;

	while(1){
		scanf("%c",&c);
		if(c=='\n')break;
	}
}

int input_num(){
	
	char str[MAX+1]="";
	int num=0;
	int i=0;
	int sig=0;

	while(1){
        printf("숫자를 입력하세요 : ");
        sig=get_only_number(str, MAX);
        printf(" 리턴 시그널 : %d   ==> %s  \n", sig, (sig>=0)? "정상" : "비정상");
        if (sig >=0 ) break;   
		flush();
         
    
	  }
        for(i=0; i<sig; i++){
        num += (str[i] - '0') * power(10, sig-1-i) ;
    }
		return num;
}


int main(){
	
	int k;
	int max=0;

	
	max=input_num();

	while(1){
		k=input_num();

		if(max>k){
		    printf("%d가 가장 큽니다.\n",max);
			}

		if(k>max) {
			printf("%d가 가장 큽니다.\n",k);
				
			max=k;}
		
			
	 }
}