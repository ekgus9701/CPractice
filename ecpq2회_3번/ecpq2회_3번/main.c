#include<stdio.h>
int main(){
	int n,i;
	printf("100���� ���� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i!=0){
			printf("%d�� �Ҽ��Դϴ�.",n);
		break;
		}
	}
}