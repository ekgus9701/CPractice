#include <stdio.h>
 

 

 

 

 
 
 
 
void sleep(int status[]){
      int sleeptime;
 
    printf("����ð���?");
    scanf("%d",&sleeptime);
    status[0]-=15*sleeptime;
    status[1]+=20*sleeptime;
    status[2]-=10*sleeptime;
    status[4]-=20*sleeptime;
}
 
 
 
int eat(int status[]){
int menu;
 
    printf("�޴��� ������?");
    scanf("%d",&menu);
    status[0]+=25*menu;
    status[1]+=10*menu;
    status[2]-=5*menu;
    status[3]+=15*menu;
    status[4]+=10*menu;
 
}
 
 
 
int play(int status[]){

      int playtime;
 
    printf("��ð� ���?");
    scanf("%d",&playtime);
    status[0]-=10*playtime;
    status[1]+=20*playtime;
    status[2]-=20*playtime;
    status[3]+=30*playtime;
    status[4]-=15*playtime;
 
}
 
 
 
int watch(int status[]){
int tv;
 
    printf("��� ���α׷��� ����?");
    scanf("%d",&tv);
    status[0]-=5*tv;
    status[1]+=10*tv;
    status[2]-=15*tv;
    status[3]+=15*tv;
    status[4]-=10*tv;
}
 
 
 
int study(int status[]){
int subject;
 
    printf("���� ��� �ұ�?");
    scanf("%d",&subject);
    status[0]-=15*subject;
    status[1]-=15*subject;
    status[2]+=20*subject;
    status[3]-=25*subject;
    status[4]+=30*subject;
    
 
}
 
 
 
void showmenu(){
 
printf("----------------\n");
 
printf("0.�׸��α�\n");
 
printf("1.���ڱ�\n");
 
printf("2.�Ա�\n");
 
printf("3.���\n");
 
printf("4.Ƽ�񺸱�\n");
 
printf("5.�����ϱ�\n");}
 
 
 
int main(){
    int status[6]={50,50,50,50,50};//������� ������, �ູ��, ��Ʈ����, �ų�, ȭ��
    int act;
 
while (1){
 
printf("������´�:\n");
 
printf("������:%d\n�ູ��:%d\n��Ʈ����:%d\n�ų�: %d\n ȭ��: %d\n",status[0],status[1],status[2],status[3],status[4]);
 
 
showmenu();
 
if(status[2]>100){
 
printf("�޽��� �ʿ���..\n");
 
}
 
if(status[2]<10){
 
printf("������ Ǯ����!\n");
 
}
 
if(status[0]>100){
 
printf("�׸�������\n");}
 
 
if(status[0]<10){
 
printf("�ʹ� �����..\n");}
 
 
if(status[1]>100){
 
printf("�����̾ߢ�\n");}
 
 
if(status[1]<10){
 
printf("�����ؤ̤�\n");}
 
 
if(status[3]>100){
 
printf("���� �ų�!!!\n");}
 
 
if(status[3]<10){
 
printf("��̾���..\n");}
 
if(status[4]>100){
 
printf("ȭ�� ��!!!!\n");}
 
 
printf("������ �ұ�?\n");
 
 
 
scanf("%d",&act);
 
if(act==0){
 
break;}
 
if(act==1){
 
    sleep(status);
 
}
 
if(act==2){
 
    eat(status);
}
 
if(act==3){
 
    play(status);
 
}
 
if (act==4){
 
    watch(status);
}
 
if (act==5){
 
    study(status);}
 
}
 
}