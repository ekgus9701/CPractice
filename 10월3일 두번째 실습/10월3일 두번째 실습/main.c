#include <stdio.h>
#include <Windows.h>

void Ȯ����(int time){
	int q=0;

	for(q=0; q<time; q++){
		printf("��");
		Sleep(200);}
}
int main(){
	int result=0;
	int ID[13]={0};
	int multiply[12]={2,3,4,5,6,7,8,9,2,3,4,5};
	int i,j;
	
	
	printf("�ֹι�ȣ�� �Է��ϼ���(�ѱ��ھ� �Է��ϼ���.): \n");
	for (i=0; i<13; i++)
		
		scanf("%d",&ID[i]);

	printf("~����� �ֹι�ȣ�� �ùٸ� �ֹι�ȣ���� Ȯ���غ��Կ�~\n");
	Ȯ����(5);
	
	for (j=0; j<12; j++){
		result+=(ID[j])*multiply[j];
		
	}
	result=(11-(result%11))%10;

	if (result==(ID[12]))
		printf("\nCorrect!");
	else printf("\nWrong!");

	return 0;

}




