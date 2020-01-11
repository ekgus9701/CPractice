#include <stdio.h>
void 메뉴보이기(){
	
	printf("메뉴:\n");
    printf("1.숙제하기\n");
	printf("2.먹기\n");
	printf("3.잠자기\n");
	printf("4.영화보기\n");
    printf("5.게임하기\n");
	printf("0.그만하기\n");
}

int 개수;
int 시간;
int 포만감;
int 행복감;
int 스트레스;
int menu;
void 현재상태보이기(){
	printf("포만감은 %d",&포만감);
	printf("행복감은 %d",&행복감);
	printf("스트레스는 %d",&스트레스);}
int main(){
	
while(1){
	포만감=0;
	행복감=0;
	스트레스=0;
	메뉴보이기();
	printf("메뉴:");scanf("%d",&menu);
	if (menu==0) break;
	if (menu==1)
		printf("개수는?");scanf("%d",&개수);
		스트레스=스트레스+30*개수;현재상태보이기();
	if (menu==2) 
		포만감=포만감+10;현재상태보이기();
	if (menu==3) 
		printf("시간은?");scanf("%d",&시간);
		스트레스=스트레스-20*시간;현재상태보이기();
	if (menu==4) 행복감=행복감+10;현재상태보이기();
	if (menu==5) 행복감=행복감+20;현재상태보이기();
}
}



