#include<stdio.h>
int main(){
	int n;
	printf("연도를 양의 정수로 입력하시오: ");
	scanf("%d",&n);
	if(n%4==0){
		if(n%100!=0){
			
		printf("%d년은 윤년입니다.",n);
	}
	}
	if(n%400==0){
		
		printf("%d년은 윤년입니다.",n);
	
	}

}