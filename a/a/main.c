#include<stdio.h>
int main(void)

{

int i;
char input;
printf("p=����, r=�����, s=���� \n");
printf("�Է�: ");

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