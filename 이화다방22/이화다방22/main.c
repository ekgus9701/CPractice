#include <stdio.h>
#include <Windows.h>

void doing(int time){
	int i=0;
 
    for(i=0; i< time; i++){
        printf("��");
		Sleep(200);}}

void showmenu(){
	printf("========��ȭ�ٹ�========");
	printf("0.�ֹ� ��\n");
	printf("1.����������\n");
	printf("2.�߰ſ� �Ƹ޸�ī��\n");
	printf("3.���̽� �Ƹ޸�ī��\n");
	printf("4.������\n");
	printf("5.���Ʈ������\n");
	printf("6.��纣�����Ʈ������\n");
}

int �ֹ��ޱ�(){
	int menu;
	printf("� �޴��� ���ðڽ��ϱ�?\n");
	scanf("%d",&menu);
	printf("�ϼ��Ǹ� �������� �����~\n");
   
	return menu;
}

void zzz(int time){
	int i=0;
 
    for(i=0; i< time; i++){
        printf("����~ ");
		Sleep(200);
	}
}

int makeEspresso(int coffee){
	printf("���������Ҹ� ����ϴ�.\n");
	printf("3�� �ɷ���~\n"); doing(3);
	zzz(3);
	printf("�Խθ��� ���������� ���Ծ��~\n");
	return coffee;
}

int makeHotAmericano(int coffee, int hotwater){
    int price=0;
	printf("�߰ſ� �Ƹ޸�ī�븦 ����ϴ�\n");
	price = makeEspresso(coffee);
	printf("3��30�� �ɷ���~\n"); doing(3.5);
	zzz(3);
	printf("�߰ſ�� �����ϼ���~\n");
	return price + hotwater;

}

int makeIceAmericano(int coffee, int coldwater, int ice){
	int price=0;
	printf("���̽� �Ƹ޸�ī�븦 ����ϴ�\n");
	price = makeEspresso(coffee);
	printf("3��30�� �ɷ���~\n"); doing(3.5);
	zzz(3);
	printf("�ÿ��� ���̽� �Ƹ޸�ī�� ���Ծ��~\n");
	return price + coldwater + ice;

}

int makeSmoothie(int syrup, int ice){
	printf("������ ����ϴ�.\n");
	printf("3�� �ɷ���~\n"); doing(3);
	zzz(3);
	printf("������ ������ ���Ծ��~\n");
	return syrup+ice;
}

int makeYogurtSmoothie(int syrup,int ice, int yogurt){
	int price=0;
	printf("���Ʈ������ ����ϴ�\n");
	price = makeSmoothie(syrup, ice);
	printf("3��30�� �ɷ���~\n"); doing(3.5);
	zzz(3);
	printf(" ���� ���Ʈ������ ���Ծ��~\n");
	return price + yogurt;}

int makeBlueberryYogurtSmoothie(int syrup,int ice, int yogurt,int blueberry){
	int price=0;
	printf("��纣�����Ʈ������ ����ϴ�\n");
	price = makeYogurtSmoothie(syrup, ice,  yogurt);
	printf("4�� �ɷ���~\n"); doing(4);
	zzz(3);
	printf(" ��ŭ�� ��纣�� ������ ���Ծ��~\n");
	return price + yogurt + blueberry;}

int pay(int price){
	int money=0;
	while(1){
		printf("���ֹ��ݾ��Դϴ�.:%d\n", price);
		printf("�����ݾ��� �Է��ϼ���.\n");scanf("%d",&money);
		printf("%d�� �޾ҽ��ϴ�.\n",money);
		if(money>price) break; 
			printf("�����մϴ�. �ٽ� ���ּ���.");
	
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
		menu = �ֹ��ޱ�();
		if (menu==0){
			printf("�ֹ� ��");
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
		
		printf("�ֹ��ݾ�:%d \n,price");

	}

	change=pay(price);
	printf("�Ž�����:%d\n",change);
	printf("====�Ž�������====\n");
	printf("����¥����%d\n",change/10000);
	change=change%10000;
	printf("õ��¥����%d\n",change/1000);
	change=change%1000;
	printf("���¥����%d\n",change/100);
	change=change%100;
	printf("��������%d\n",change);



}

