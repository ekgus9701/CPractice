#include<stdio.h>

void func(void *x,char type){
	if(type =='b')
		printf("%#x\n",(char *)x);
	if(type =='h')
		printf("%#x\n",(short *)x);
	if(type =='w')
		printf("%#x\n",(int *)x);
}

int main(void){
	unsigned long int x=10000000000;
	char type='h';
	func((void *)x,type);
}

