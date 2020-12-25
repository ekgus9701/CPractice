#include<stdio.h>
int main(){
	int i,num=0,s[42]={0,},count=0;

	for(i=0;i<10;i++){
		scanf("%d",&num);
		s[num%42]++;
	}

	for(i=0;i<42;i++){
		if(s[i]!=0)
			count++;
	}

	printf("%d\n",count);

	

}