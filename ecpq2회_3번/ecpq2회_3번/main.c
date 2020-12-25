#include<stdio.h>
int main(){
	int n,i;
	printf("100보다 작은 양의 정수를 입력하시오: ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i!=0){
			printf("%d은 소수입니다.",n);
		break;
		}
	}
}