#include<stdio.h>
int main(){
	char str[100]="abcdefg1234567890!@#$%^&*;\n";    
	int i;
	for(i=0; i<100; i++){
		printf("%s",&str[i]);
	}
}