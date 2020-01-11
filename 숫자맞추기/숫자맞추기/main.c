#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num;
	int answer;
	srand((unsigned) time(NULL));
	num = rand()%10000;
	while(1){
	printf("수를 입력하세요.\n");
	scanf("%d",&answer);
	if(num>answer)
		printf("더 큰 수를 입력하세요.\n");
	if(num<answer)
		printf("더 작은 수를 입력하세요.\n");
	if(num==answer) 
		
	    printf("맞았습니다! 축하합니다!\n");
	    
	    
	}
}


	
