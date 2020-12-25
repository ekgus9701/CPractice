#include<stdio.h>
int main(){
	int a[5];
	int b[16];
	int i,j;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<15;j++){
		scanf("%d",&b[j]);
	}
	for(j=0;j<15;j++){
		if(b[j]==a[0]){
			if(b[j+1]==a[1]){
				if(b[j+2]==a[2]){
					if(b[j+3]==a[3]){
						printf("성공");
					}
					else printf("실패");
				}
			}
		}
	}
					
				

	}
	