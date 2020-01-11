#include <stdio.h>
#include "myfunc.h"

int main(){
	
int w=0,h=0,t=0;
int i=0,j=0;

printf("크리스마스 트리 높이: ");
scanf("%d",&t);
printf("트리 밑둥 가로");
scanf("%d",&w);
printf("트리 밑둥 높이");
scanf("%d",&h);

draw_eqtri(t,40);
draw_rect(w,h,(40)-w);
}
	


