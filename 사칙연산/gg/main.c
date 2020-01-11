#include <stdio.h>

//두수입력받고
//메뉴보이고
//메뉴선택
//결과출력
//그만하라고 할때까지 반복

void 메뉴보이기(){
	
	printf("====================\n");
	printf("1.더하기 \n");
	printf("2.빼기 \n");
	printf("3.곱하기 \n");
	printf("4.나누기 \n");
	printf("0.그만두기 \n");
	printf("====================\n");
}

int 더하기(int x,int y){
	printf("%d+%d",x,y);}

int 빼기(int x,int y){
	printf("%d-%d",x,y);}

int 곱하기(int x,int y){
	printf("%d*%d",x,y);}

//0으로 나누면 안돼
int 나누기(int x,int y){
	printf("%d/%d",x,y);

	return (double)x/y;}



int main(){
		int x,y;
		int result;
		int menu;
		
		while(1){
			printf("첫번째 수를 입력하세요,");
			scanf("%d",&x);
			printf("두번째 수를 입력하세요");
			scanf("%d",&y);
			메뉴보이기();
			printf("메뉴:"); scanf("%d", &menu);
		
		
			if (menu==0) break;
			if (menu==1) result = 더하기(x,y);
			if (menu==2) result = 빼기(x,y);
			if (menu==3) result = 곱하기(x,y);
			if (menu==4) result2 = 나누기(x,y);

			if (menu==4) result = 나누기(x,y);

			printf("=%d \n",result);
		}

}