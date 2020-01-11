#include <stdio.h>
#include <Windows.h>

void 확인중(int time){
	int q=0;

	for(q=0; q<time; q++){
		printf("◎");
		Sleep(200);}
}
int main(){
	int result=0;
	int ID[13]={0};
	int multiply[12]={2,3,4,5,6,7,8,9,2,3,4,5};
	int i,j;
	
	
	printf("주민번호를 입력하세요(한글자씩 입력하세요.): \n");
	for (i=0; i<13; i++)
		
		scanf("%d",&ID[i]);

	printf("~당신의 주민번호가 올바른 주민번호인지 확인해볼게요~\n");
	확인중(5);
	
	for (j=0; j<12; j++){
		result+=(ID[j])*multiply[j];
		
	}
	result=(11-(result%11))%10;

	if (result==(ID[12]))
		printf("\nCorrect!");
	else printf("\nWrong!");

	return 0;

}




