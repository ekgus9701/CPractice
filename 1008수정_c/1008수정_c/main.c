#include<stdio.h>
#define MAX 9//����������� �ޱ�

//�迭�� ���̸� ���ڷ� �޾� ���� ���ڸ� �Է¹ް� �迭�� �����ϴ� ����� �մϴ�.
//�ڸ��� �ʰ�:-1, �����ƴѹ��ڰ� �ִ�, �Է½���:-2, ����:0;
int get_only_number(char str[],int length){
	int i=0;
	char c;
	
	while(1){
		scanf("%c",&c);//���Ͱ� ������ ������ �ݺ��ؼ� �Է�
		               //ũ�� üũ& ����üũ
		if (i>=length) {
			printf("�ڸ��� �ʰ�!\n");
			return -1;
		}
		

		if(c>='0' && c<='9') str[i++]=c;
		else {
			//printf("%c:���� �ƴ� �����̴�!\n",c);
			return -2;
		}
		
	}
	str[i]='\0';//���ڿ��� ������ �����ڵ�μ� �ι��ڸ� �ִ´�.
		return i;
}

int power(int base, int exp){
	int i;
	int value=1;

	for(i=0; i<exp; i++)
		value*=base;
	return value;
}

int main(){
	char c;
	char str[MAX+1]="";
	int num=0;
	int i=0;
	int sig=0;

	while(1){
		printf("���ڸ� �Է��ϼ���.\n");
	//1 ���ڿ��� �޾Ƽ� ��ȯ�մϴ�.
	//2 ���ڷ� �޾Ƽ� ���ڿ��� ������ �� ��ȯ�մϴ�.

		sig=get_only_number(str,MAX);
	
		printf("���� �ñ׳�: %d  -->   %s \n",sig,(sig>=0)? "����" : "������");
		if (sig>=0) break;
	
	}
	printf("���ݱ��� �Էµ� ���ڿ�: %s \n",str);
	printf("���ݱ��� �Էµ� ���ڿ��� ����: %d \n",sig);
    
	//���ڿ� ����: strlen(str);
	for(i=0; i<sig; i++){
		//���ڿ� str�� �ִ� ����ҿ� 10�� ���� ������ ����
		//(str[i]-'0')*10�� (sig-1-i)��
		num+=(str[i]-'0')*power(10,sig-1-i);
	}

	printf("��ȯ�� ���ڴ� : %d \n",num);
	printf("num+1:%d\n",num+1);
	

	
}