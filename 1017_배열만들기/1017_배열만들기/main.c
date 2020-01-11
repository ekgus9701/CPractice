#include<stdio.h>
int main(){
	int ar[3][5]={0};
	int i;
	int j;
	
	for(i=0; i<3; i++){
		for (j=0;j<5; j++){
			ar[i][j]=0;
			ar[i][j]++;
		}
	}
	printf("이름        주소      값(10진수)        type       size\n");
	printf("----------------------------------------------------------\n");
	printf(" ar:        %d   %d       int[3][5]  %d bytes  \n",&ar, ar, sizeof(ar));
	for(i=0; i<3; i++){
		printf(" ar[%d]:     %d   %d       int[5]     %d bytes  \n",i,&ar[i], ar[i], sizeof(ar[i]));
		for (j=0;j<5; j++){
			printf(" ar[%d][%d]:  %d   %d                int     %d bytes  \n",i,j,&ar[i][j], ar[i][j], sizeof(ar[i][j]));
		}
	}
}
			


