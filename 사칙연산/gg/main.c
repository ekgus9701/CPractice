#include <stdio.h>

//�μ��Է¹ް�
//�޴����̰�
//�޴�����
//������
//�׸��϶�� �Ҷ����� �ݺ�

void �޴����̱�(){
	
	printf("====================\n");
	printf("1.���ϱ� \n");
	printf("2.���� \n");
	printf("3.���ϱ� \n");
	printf("4.������ \n");
	printf("0.�׸��α� \n");
	printf("====================\n");
}

int ���ϱ�(int x,int y){
	printf("%d+%d",x,y);}

int ����(int x,int y){
	printf("%d-%d",x,y);}

int ���ϱ�(int x,int y){
	printf("%d*%d",x,y);}

//0���� ������ �ȵ�
int ������(int x,int y){
	printf("%d/%d",x,y);

	return (double)x/y;}



int main(){
		int x,y;
		int result;
		int menu;
		
		while(1){
			printf("ù��° ���� �Է��ϼ���,");
			scanf("%d",&x);
			printf("�ι�° ���� �Է��ϼ���");
			scanf("%d",&y);
			�޴����̱�();
			printf("�޴�:"); scanf("%d", &menu);
		
		
			if (menu==0) break;
			if (menu==1) result = ���ϱ�(x,y);
			if (menu==2) result = ����(x,y);
			if (menu==3) result = ���ϱ�(x,y);
			if (menu==4) result2 = ������(x,y);

			if (menu==4) result = ������(x,y);

			printf("=%d \n",result);
		}

}