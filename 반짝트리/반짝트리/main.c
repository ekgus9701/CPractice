#include <stdio.h>
#include "myfunc.h"

int main(){
	
int w=0,h=0,t=0;
int i=0,j=0;

printf("ũ�������� Ʈ�� ����: ");
scanf("%d",&t);
printf("Ʈ�� �ص� ����");
scanf("%d",&w);
printf("Ʈ�� �ص� ����");
scanf("%d",&h);

draw_eqtri(t,40);
draw_rect(w,h,(40)-w);
}
	


