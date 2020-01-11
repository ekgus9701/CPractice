#include <stdio.h>
#include <Windows.h>

void doing(int time){
	int i=0;
 
    for(i=0; i< time; i++){
        printf("■");
		Sleep(200);}}

void showmenu(){
	printf("========이화다방========");
	printf("0.주문 끝\n");
	printf("1.에스프레소\n");
	printf("2.뜨거운 아메리카노\n");
	printf("3.아이스 아메리카노\n");
	printf("4.스무디\n");
	printf("5.요거트스무디\n");
	printf("6.블루베리요거트스무디\n");
}

int 주문받기(){
	int menu;
	printf("어떤 메뉴를 고르시겠습니까?\n");
	scanf("%d",&menu);
	printf("완성되면 진동벨이 울려요~\n");
   
	return menu;
}

void zzz(int time){
	int i=0;
 
    for(i=0; i< time; i++){
        printf("지잉~ ");
		Sleep(200);
	}
}

int makeEspresso(int coffee){
	printf("에스프레소를 만듭니다.\n");
	printf("3분 걸려요~\n"); doing(3);
	zzz(3);
	printf("쌉싸름한 에스프레소 나왔어요~\n");
	return coffee;
}

int makeHotAmericano(int coffee, int hotwater){
    int price=0;
	printf("뜨거운 아메리카노를 만듭니다\n");
	price = makeEspresso(coffee);
	printf("3분30초 걸려요~\n"); doing(3.5);
	zzz(3);
	printf("뜨거우니 조심하세요~\n");
	return price + hotwater;

}

int makeIceAmericano(int coffee, int coldwater, int ice){
	int price=0;
	printf("아이스 아메리카노를 만듭니다\n");
	price = makeEspresso(coffee);
	printf("3분30초 걸려요~\n"); doing(3.5);
	zzz(3);
	printf("시원한 아이스 아메리카노 나왔어요~\n");
	return price + coldwater + ice;

}

int makeSmoothie(int syrup, int ice){
	printf("스무디를 만듭니다.\n");
	printf("3분 걸려요~\n"); doing(3);
	zzz(3);
	printf("달콤한 스무디 나왔어요~\n");
	return syrup+ice;
}

int makeYogurtSmoothie(int syrup,int ice, int yogurt){
	int price=0;
	printf("요거트스무디를 만듭니다\n");
	price = makeSmoothie(syrup, ice);
	printf("3분30초 걸려요~\n"); doing(3.5);
	zzz(3);
	printf(" 진한 요거트스무디 나왔어요~\n");
	return price + yogurt;}

int makeBlueberryYogurtSmoothie(int syrup,int ice, int yogurt,int blueberry){
	int price=0;
	printf("블루베리요거트스무디를 만듭니다\n");
	price = makeYogurtSmoothie(syrup, ice,  yogurt);
	printf("4분 걸려요~\n"); doing(4);
	zzz(3);
	printf(" 상큼한 블루베리 스무디 나왔어요~\n");
	return price + yogurt + blueberry;}

int pay(int price){
	int money=0;
	while(1){
		printf("총주문금액입니다.:%d\n", price);
		printf("결제금액을 입력하세요.\n");scanf("%d",&money);
		printf("%d원 받았습니다.\n",money);
		if(money>price) break; 
			printf("부족합니다. 다시 내주세요.");
	
	}
	return money-price;}

int main(){

	int price=0;
	int menu;
	int change=0;
	int coffee=500;
	int hotwater=100;
	int coldwater=100;
	int ice=100;
	int syrup=500;
	int yogurt=700;
	int blueberry=800;

	while(1){
	    showmenu();
		menu = 주문받기();
		if (menu==0){
			printf("주문 끝");
			break;}
		if (menu==1){
			price+=makeEspresso(coffee);
		}
		
		if (menu==2){
			price+=makeHotAmericano(coffee,hotwater);
		}

		if (menu==3){
			price+=makeIceAmericano(coffee,coldwater,ice);
		}
		if (menu==4){
			price+=makeSmoothie(syrup,ice);
		}
		if (menu==5){
			price+=makeYogurtSmoothie(syrup,ice,yogurt);
		}
		if (menu==6){
			price+=makeBlueberryYogurtSmoothie(syrup,ice,blueberry,yogurt);
		}
		
		printf("주문금액:%d \n,price");

	}

	change=pay(price);
	printf("거스름돈:%d\n",change);
	printf("====거스름돈은====\n");
	printf("만원짜리는%d\n",change/10000);
	change=change%10000;
	printf("천원짜리는%d\n",change/1000);
	change=change%1000;
	printf("백원짜리는%d\n",change/100);
	change=change%100;
	printf("나머지는%d\n",change);



}

