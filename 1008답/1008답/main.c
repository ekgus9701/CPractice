#include <stdio.h>
 
#define MAX  9 //����������� �����ô�.
 
//�迭�� ���̸� ���ڷ� �޾Ƽ�, ���� ���ڸ� �迭�� �����ϴ� ����� �մϴ�.
//�ڸ����ʰ� : -1,  ���� �ƴ� ���ڰ� �ִ�. �Է½��� : -2, ���� : ���ڿ��� ���� ����
int get_only_number(char str[], int length){
    int i=0;
    char c;
 
    while(1){
        scanf("%c", &c);   //���Ͱ� ������������ �ݺ��ؼ� �Է�!
        //ũ��üũ & //����üũ
        if (c== '\n') break;
        if (i >= length) { 
            printf("�ڸ��� �ʰ�! ");
            return -1;
        }
        if(c >='0' && c <='9') str[i++]=c;
        else {
            //printf(" %c : ���� �ƴ� �����Դϴ�. \n",c);
            return -2;
        }
    }
 
    str[i]='\0';  //���ڿ��� ������ �����ڵ�μ�, �ι��ڸ� �ֽ��ϴ�.
 
    return i;
 
}
 
 
int power(int base, int exp){
 
    int i;
    int value=1;
 
    for(i=0; i<exp; i++)
        value *= base;
 
    return value;
}
 
//�Է¹��� ���� : '����'�� ���� ������ ��� �Է��� ������ �о�Ƿ� 
//�Է´�⿭���� �ƹ��͵� �����ʰ� �˴ϴ�.
void flush(){
    char c;
 
    while(1){    
        scanf("%c",&c);
        if(c=='\n') break;
    }
}
int main(){
 
    char c;
    char str[MAX+1]="";
    int num=0;
    int i=0;
    int sig=0;
    
    
    //���ڰ� �Էµ� �� ���� �ݺ��ϱ�
    while(1){
        printf("���ڸ� �Է��ϼ��� : ");
        //1.���ڿ��� �޾Ƽ� ��ȯ�մϴ�.
        //2.���ڷ� �޾Ƽ� ���ڿ��� ������ �� ��ȯ�մϴ�.
        sig=get_only_number(str, MAX);
        printf(" ���� �ñ׳� : %d   ==> %s  \n", sig, (sig>=0)? "����" : "������");
        if (sig >=0 ) break;        
        //�Է´�⿭ ���� : flush !!
        //flush();
        
    }
 
 
 
    printf("���ݱ��� �Էµ� ���ڿ� : %s \n", str);
    printf("���ݱ��� �Էµ� ������ ���� : %d \n", sig);
 
 
    //���ڿ� ���� :  strlen(str);
 
    for(i=0; i<sig; i++){
        //���ڿ� str�� �ִ� �� ��ҿ� 10�� ���� ���� �� �����ϱ�!!
        // (str[i] - '0') * 10�� (sig-1-i)��
        num += (str[i] - '0') * power(10, sig-1-i) ;
    
    }
 
    printf("��ȯ�� ���ڴ� : %d \n", num);
    printf("num + 1  : %d \n", num+1);
    
 
 
}
