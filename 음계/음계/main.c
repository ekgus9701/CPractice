#include<stdio.h>
int main(){
	int i=0, s[8]={0},c1=0,c2=0,c3=0;

	for(i=0;i<8;i++){
		scanf("%d",&s[i]);
	}

	for(i=0;i<7;i++){
		if(s[i]==s[i+1]+1)
			c1++;
		if(s[i]==s[i+1]-1)
			c2++;

	}
	if(c1==7)
		printf("descending\n");

	else if(c2==7)
		printf("ascending\n");
	else printf("mixed");

}