#include<stdio.h>
int swap(int *px,int *py){
	int *tmp=NULL;
	*tmp=*px;
	*px=*py;
	*py=*tmp;
	printf("%d %d\n", *px, *py);
	return *px;
}

int main(){
	int a=1,b=2;
	int k=swap(&a,&b);
	printf("%d %d %d",a,b,k);
}

