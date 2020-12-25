#include<stdio.h>
int main(void)

{

int i;
char input;
printf("p=정지, r=재실행, s=종료 \n");
printf("입력: ");

for(i=1; i>0; i++)
{
if(i%2==0)
    printf("%d \n", i);
}
scanf("%c", &input);
while(input!='s')
{

if(input=='p')
    break;
if(input=='r')
    continue;
}
}