#include<stdio.h>
int main(){
	int i;
	int j;
	int value;
	
	for (j=1; j<=100; j++){
		value=j%10;
		if(value==5|| value==0)//���� �ڸ����� 5�� 0�ΰ�� ¦ ���
			printf("¦!\n");
		else printf("%3d\n",j);
	}
}
