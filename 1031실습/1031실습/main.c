#include <stdio.h>

int main(){

	char *str[7]={"computer","programming","JAVA","C++","C","Python","JavaScript"};
	int i;

	for(i=0; i<7; i++){
		printf("str[%d]: %s, %s\n",i,str[i], *(str+i));
	}
	printf("%s\n",str[1]);//programming ���
	printf("%c\n",str[1][0]);//p���
	printf("&str[5][1] : %s \n",&str[5][1]);
	printf("%s\n", *(str+1)+3);
	printf("%d\n",*str[5]);//p�� �ƽ�Ű�ڵ带 ����
	printf("%p\n",str[5]);//programming�� �ּҸ� ����

}