#include <stdio.h>
int main(){
	char str[1000]={0};
	int i;
	int count=0;
	
	scanf("%[^\n]", str);

	for(i=0;i<1000;i++){
		if(str[i]==' '){
			count+=1;
		}
	}
	printf("%d",count+1);
}



