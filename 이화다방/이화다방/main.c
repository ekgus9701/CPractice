#include<stdio.h>
#include<Windows.h>


void doing(int time){
	int i=0;
	for(i=0;i<time;i++){
	printf("��");
	Sleep(500);}
}


void �޴����̱�(){
	printf("=======��ȭ�ٹ�=========\n");
	printf("1.����������\n");
	printf("2.�Ƹ޸�ī��\n");
	printf("3.ī���\n");
	printf("4.�ٴҶ�ī���\n");
	printf("=======��ȭ�ٹ�=========\n");

}

int makeEspresso(int coffee){
    printf("���������Ҹ� ����ϴ�..\n");
	doing(5);
	printf("������� ���������Ұ� ���Ծ��~");
	//���ݸ���
	return coffee;
}

int makeAmericano(int coffee,int water){
	int price=0;
	printf("�Ƹ޸�ī�븦 ����ϴ�..\n");
	price=makeEspresso(coffee);
	doing(5);
	printf("������ ���� �ֽ��ϴ�"); 
	printf("�Խθ��� �Ƹ޸�ī�밡 ���Ծ��~");
	
	//���ݸ���
	return price+water;

}

int makeCafelatte(int coffee,int milk){
	int price=0;
	printf("ī��󶼸� ����ϴ�..\n");
	price=makeEspresso(coffee);
	doing(5);
	printf("������ ������ �ֽ��ϴ�. \n"); 
	printf("����� ī��󶼰� ���Ծ��~");
	//���ݸ���
	return price+milk;}

int makevanilaLAtte(int coffee,int milk,int vanila){
	int price=0;
	printf("�ٴҶ�󶼸� ����ϴ�..");
	doing(5);
	price= makeCafelatte(coffee,milk);
	printf("�ٴҶ� �ҽ��� �߰��մϴ�.\n");
	printf("�ε巯�� �ٴҶ�󶼰� ���Ծ��~");
	
	
	return price+vanila;}





int pay(int price){
	int money=0;
	while(1){
		printf("���ֹ��ݾ�:%d\n",price);
		printf("�����ݾ��� �Է��ϼ���");scanf_s("%d",&money);
		printf("%d�� �޾ҽ��ϴ�! \n", money);
		if (money>=price) break;
		printf("�ֹ��ݾ׺��� �۽��ϴ�. �ٽ� �Է��ϼ���");
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
	
	
	�޴����̱�();
	printf("� �޴��� �ֹ��Ͻðڽ��ϱ�?");scanf_s("%d�� �ֹ��ҰԿ�~",&menu);
	
	
	if (menu==0){
            printf("�ֹ��� �����մϴ� \n");
            break;
        }
	if (menu==1) { 
	int price=0;
	printf("�Ƹ޸�ī�븦 ����ϴ�..\n");
	price=makeEspresso(coffee);
	printf("������ ���� �ֽ��ϴ�"); doing(5);
	printf("�Խθ��� �Ƹ޸�ī�밡 ���Ծ��~");
	
	//���ݸ���
	return price+water;
		price+=makeEspresso(coffee);}
	if (menu==2){ price+=makeAmericano(coffee,water);}
	if (menu==3) {price+=makeCafelatte(coffee,milk);}
	if (menu==4) {price+=makevanilaLAtte(coffee,milk,vanila);}


	printf("�ֹ��ݾ�:%d\n",price);

}


change=pay(price);
printf("�Ž������� %d���Դϴ�.\n",change);
printf("======= ����/õ��/���/������  \n");
printf("����¥�� : %3d ��\n", change/10000);
printf("õ��¥�� : %3d ��\n", (change%10000)/1000);
printf("���¥�� : %3d ��\n", (change%1000)/100);
printf("  ������ : %3d ��\n", change%100);
}