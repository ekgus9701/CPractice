#include<stdio.h>

int main(){
	int i;
	int j;
	int k;
	int max;

	printf("수를 입력하세요\n");
	scanf("%d",&i);
	
	printf("수를 입력하세요.\n");
	scanf("%d",&j);

	if(i>j){
		printf("%d가 가장 큽니다.\n",i);
		max=i;
	}
	    
	if(i<j){
		printf("%d가 가장 큽니다.\n",j);
	    max=j;
	}

	 while(1){
		printf("수를 입력하세요\n");
		scanf("%d",&k);

		
		if(max>k){
		    printf("%d가 가장 큽니다.\n",max);
			max=max;}

		if(k>max) {
			printf("%d가 가장 큽니다.\n",k);1234
				1
			max=k;}
		
			
	 }
	
	 
}
