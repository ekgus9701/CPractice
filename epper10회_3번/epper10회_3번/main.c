#include <stdio.h>
int main(){
	int n,i;
	char name[50][50];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&name[i]);
	}
	for(i=0;i<n;i++){
		printf("Hello, %s!",name[i]);
	}
}
