#include <stdio.h>
#include "myfunc.h"
#define SIZE 10
 
int main(){
    int ar[SIZE]={0};
	int nar[4][SIZE]={0};
	int i;

	for(i=0;i<4;i++){
		make_numbers(nar[i],SIZE);
	}
	for(i=0;i<4;i++){
		show(nar[i],SIZE);
		printf("\n");}

 
    for(i=0;i<4;i++)
    bubble(nar[i],SIZE);
	printf("\n");
	for(i=0;i<4;i++)
    show(nar[i],SIZE);
	printf("\n");
	for(i=0;i<4;i++)
    bubble_r(nar[i],SIZE);
	printf("\n");
}