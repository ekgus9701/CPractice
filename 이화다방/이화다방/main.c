#include<stdio.h>
#include<Windows.h>


void doing(int time){
	int i=0;
	for(i=0;i<time;i++){
	printf("◎");
	Sleep(500);}
}


void 메뉴보이기(){
	printf("=======이화다방=========\n");
	printf("1.에스프레소\n");
	printf("2.아메리카노\n");
	printf("3.카페라떼\n");
	printf("4.바닐라카페라떼\n");
	printf("=======이화다방=========\n");

}

int makeEspresso(int coffee){
    printf("에스프레소를 만듭니다..\n");
	doing(5);
	printf("향기좋은 에스프레소가 나왔어요~");
	//가격리턴
	return coffee;
}

int makeAmericano(int coffee,int water){
	int price=0;
	printf("아메리카노를 만듭니다..\n");
	price=makeEspresso(coffee);
	doing(5);
	printf("따뜻한 물을 넣습니다"); 
	printf("쌉싸름한 아메리카노가 나왔어요~");
	
	//가격리턴
	return price+water;

}

int makeCafelatte(int coffee,int milk){
	int price=0;
	printf("카페라떼를 만듭니다..\n");
	price=makeEspresso(coffee);
	doing(5);
	printf("따뜻한 우유를 넣습니다. \n"); 
	printf("고소한 카페라떼가 나왔어요~");
	//가격리턴
	return price+milk;}

int makevanilaLAtte(int coffee,int milk,int vanila){
	int price=0;
	printf("바닐라라떼를 만듭니다..");
	doing(5);
	price= makeCafelatte(coffee,milk);
	printf("바닐라 소스를 추가합니다.\n");
	printf("부드러운 바닐라라떼가 나왔어요~");
	
	
	return price+vanila;}





int pay(int price){
	int money=0;
	while(1){
		printf("총주문금액:%d\n",price);
		printf("결제금액을 입력하세요");scanf_s("%d",&money);
		printf("%d원 받았습니다! \n", money);
		if (money>=price) break;
		printf("주문금액보다 작습니다. 다시 입력하세요");
    }
	return money-price;
}

int main(){
	int price=0;
    int menu;
	int change=0;
	int coffee=500;
    int vanila=500;
    int water=500;
    int milk=1000;
    
	while(1){
	
	
	메뉴보이기();
	printf("어떤 메뉴를 주문하시겠습니까?");scanf_s("%d을 주문할게요~",&menu);
	
	
	if (menu==0){
            printf("주문을 종료합니다 \n");
            break;
        }
	if (menu==1) { 
	int price=0;
	printf("아메리카노를 만듭니다..\n");
	price=makeEspresso(coffee);
	printf("따뜻한 물을 넣습니다"); doing(5);
	printf("쌉싸름한 아메리카노가 나왔어요~");
	
	//가격리턴
	return price+water;
		price+=makeEspresso(coffee);}
	if (menu==2){ price+=makeAmericano(coffee,water);}
	if (menu==3) {price+=makeCafelatte(coffee,milk);}
	if (menu==4) {price+=makevanilaLAtte(coffee,milk,vanila);}


	printf("주문금액:%d\n",price);

}


change=pay(price);
printf("거스름돈은 %d원입니다.\n",change);
printf("======= 만원/천원/백원/나머지  \n");
printf("만원짜리 : %3d 개\n", change/10000);
printf("천원짜리 : %3d 개\n", (change%10000)/1000);
printf("백원짜리 : %3d 개\n", (change%1000)/100);
printf("  나머지 : %3d 원\n", change%100);
}