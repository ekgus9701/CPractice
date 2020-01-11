#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dataType.h"

int main(){
	STD1 s1={0};
	STD2 s2={0};
	STD2 *s3=NULL;

	s1.number =100;
	strcpy(s1.name, "abcde");//s1.name="abcde";
	s2.number =100;
	s2.name="abcde";

	printf("s1의 크기 : %d\n", sizeof(s1));
	printf("s2의 크기 : %d\n", sizeof(s2));
	printf("s3의 크기 : %d\n", sizeof(s3));
}