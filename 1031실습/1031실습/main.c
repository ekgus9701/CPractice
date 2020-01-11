#include <stdio.h>

int main(){

	char *str[7]={"computer","programming","JAVA","C++","C","Python","JavaScript"};
	int i;

	for(i=0; i<7; i++){
		printf("str[%d]: %s, %s\n",i,str[i], *(str+i));
	}
	printf("%s\n",str[1]);//programming 출력
	printf("%c\n",str[1][0]);//p출력
	printf("&str[5][1] : %s \n",&str[5][1]);
	printf("%s\n", *(str+1)+3);
	printf("%d\n",*str[5]);//p의 아스키코드를 찍음
	printf("%p\n",str[5]);//programming의 주소를 찍음

}