#include <stdio.h>
 

 

 

 

 
 
 
 
void sleep(int status[]){
      int sleeptime;
 
    printf("수면시간은?");
    scanf("%d",&sleeptime);
    status[0]-=15*sleeptime;
    status[1]+=20*sleeptime;
    status[2]-=10*sleeptime;
    status[4]-=20*sleeptime;
}
 
 
 
int eat(int status[]){
int menu;
 
    printf("메뉴의 개수는?");
    scanf("%d",&menu);
    status[0]+=25*menu;
    status[1]+=10*menu;
    status[2]-=5*menu;
    status[3]+=15*menu;
    status[4]+=10*menu;
 
}
 
 
 
int play(int status[]){

      int playtime;
 
    printf("몇시간 놀까?");
    scanf("%d",&playtime);
    status[0]-=10*playtime;
    status[1]+=20*playtime;
    status[2]-=20*playtime;
    status[3]+=30*playtime;
    status[4]-=15*playtime;
 
}
 
 
 
int watch(int status[]){
int tv;
 
    printf("몇개의 프로그램을 볼까?");
    scanf("%d",&tv);
    status[0]-=5*tv;
    status[1]+=10*tv;
    status[2]-=15*tv;
    status[3]+=15*tv;
    status[4]-=10*tv;
}
 
 
 
int study(int status[]){
int subject;
 
    printf("과제 몇개를 할까?");
    scanf("%d",&subject);
    status[0]-=15*subject;
    status[1]-=15*subject;
    status[2]+=20*subject;
    status[3]-=25*subject;
    status[4]+=30*subject;
    
 
}
 
 
 
void showmenu(){
 
printf("----------------\n");
 
printf("0.그만두기\n");
 
printf("1.잠자기\n");
 
printf("2.먹기\n");
 
printf("3.놀기\n");
 
printf("4.티비보기\n");
 
printf("5.과제하기\n");}
 
 
 
int main(){
    int status[6]={50,50,50,50,50};//순서대로 포만감, 행복감, 스트레스, 신남, 화남
    int act;
 
while (1){
 
printf("현재상태는:\n");
 
printf("포만감:%d\n행복감:%d\n스트레스:%d\n신남: %d\n 화남: %d\n",status[0],status[1],status[2],status[3],status[4]);
 
 
showmenu();
 
if(status[2]>100){
 
printf("휴식이 필요해..\n");
 
}
 
if(status[2]<10){
 
printf("에너지 풀충전!\n");
 
}
 
if(status[0]>100){
 
printf("그만먹을래\n");}
 
 
if(status[0]<10){
 
printf("너무 배고파..\n");}
 
 
if(status[1]>100){
 
printf("힐링이야♥\n");}
 
 
if(status[1]<10){
 
printf("불행해ㅜㅜ\n");}
 
 
if(status[3]>100){
 
printf("완전 신나!!!\n");}
 
 
if(status[3]<10){
 
printf("재미없어..\n");}
 
if(status[4]>100){
 
printf("화가 나!!!!\n");}
 
 
printf("무엇을 할까?\n");
 
 
 
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