#include<stdio.h>
int main(){
	int price=0;
	int change=0;
	int c500;
	int c100;
	int c50;
	int c10;
	int c5;
	int c1;
	int sum;

	scanf("%d",&price);
	change=1000-price;
	c500=change/500;
	change=change%500;
	c100=change/100;
	change=change%100;
	c50=change/50;
	change=change%50;
	c10=change/10;
	change=change%10;
	c5=change/5;
	change=change%5;
	c1=change/1;
	change=change%1;
	sum=c500+c100+c50+c10+c5+c1;

	printf("%d\n",sum);






}
