
#define N 10
int main(){
	int i,j,k=0;
	int num[N]={0};

	while(1){
		printf(" %d-input: ",k);scanf("%d",&i);

		if(i%10==0) continue; //입력된 수 i가 10의 배수라면 이후 라인은 무시되고 다시 입력을 받습니다.

		num[k]=i;//입력된수 i가 10의 배수가 아니라면 배열에 i를 넣고
		for(j=0; j<i; j++){
			if(i%2==0) break;//그리고 i가 2의 배수라면 이 반복문을 벗어나 아래 문장을 수행합니다.
			else printf("*");//i가 2의 배수가 아니라면 i만큼의 *을 출력합니다.
		}
		k++;
		
		for (j=0; j<10; j++)//num배열에 들어있는 값을 찍습니다.
			printf("%d",num[j]);
		printf("###\n");
	}
	
	
	
	
	}