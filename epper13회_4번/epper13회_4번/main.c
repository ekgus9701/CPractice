#include<stdio.h>
int main(){
	int n,i;
	int X;

	scanf("%d",&n);
	printf("1000이상의 수를 %d번 입력하세요.\n",n);
	for(i=0;i<n;i++){
		scanf("%lf",&X);
		if (X % 100 >= 50)
			printf("%d ", (X / 100 + 1) * 100);
		else
			printf("%d ", X/ 100 * 100);

		printf("%d\n", X/ 100 * 100);
	}
	
}
