#include<stdio.h>
int main(){
	int x,y,w,h,x1=0,x2=0,y1=0,y2=0,ax=0,ay=0,a=0;
	scanf("%d %d %d %d", &x,&y,&w,&h);
	x1=w-x;
	x2=x-0;
	y1=h-y;
	y2=y-0;

	if(x1>x2)
		ax=x2;
	else ax=x1;

	if(y1>y2)
		ay=y2;
	else ay=y1;

	if(ay>ax)
		a=ax;

	else a=ay;

	printf("%d",a);
}

