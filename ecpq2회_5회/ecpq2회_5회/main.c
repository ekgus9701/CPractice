#include<stdio.h>
int main(){
	int a[11]={0},i,j,temp;
	printf("���� ���� 10���� �Է��Ͻÿ�:");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++){
		for(j=0;j<10-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("�ִ밪: %d",a[10]);
}


