#include<stdio.h>

int main(){
	int i;
	int j;
	int k;
	int max;

	printf("���� �Է��ϼ���\n");
	scanf("%d",&i);
	
	printf("���� �Է��ϼ���.\n");
	scanf("%d",&j);

	if(i>j){
		printf("%d�� ���� Ů�ϴ�.\n",i);
		max=i;
	}
	    
	if(i<j){
		printf("%d�� ���� Ů�ϴ�.\n",j);
	    max=j;
	}

	 while(1){
		printf("���� �Է��ϼ���\n");
		scanf("%d",&k);

		
		if(max>k){
		    printf("%d�� ���� Ů�ϴ�.\n",max);
			max=max;}

		if(k>max) {
			printf("%d�� ���� Ů�ϴ�.\n",k);1234
				1
			max=k;}
		
			
	 }
	
	 
}
