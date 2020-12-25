#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	while(1){
		a=0;
		b=0;
		c=0;
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		if(a==0&&b==0&&c==0){
			break;
		}
		else{
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
				printf("right\n");
			else
				printf("wrong\n");
		}
	}
}
			


