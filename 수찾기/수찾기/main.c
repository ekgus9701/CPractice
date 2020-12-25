#include<stdio.h>
int main(){
	int n=0,a[10000]={0},m=0,b[10000]={0};
	int i=0,j=0,k=0,c1=0,c2=0;

	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&m);
	
	for(k=0;k<m;k++){
	scanf("%d",&b[k]);
	
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[j]==b[i])
				c1=2;
			if(a[j]!=b[i])
				c2=1;
			
		}
		if(c1>c2)
		printf("1\n");
	else printf("0\n");
	c1=0,c2=0;

	}
	
}


	


