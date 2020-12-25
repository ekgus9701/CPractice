#include<stdio.h>
int main(){
	long A;
	long B;
	long C;
	int i=1;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	while(1){
		if(A+B*i<i*C){
			printf("%d",i);
			break;
		}
		if(C-B<0){
			printf("%d",-1);
			break;
		}
			i++;
	}
}

#include <stdio.h>

int main()
{
	int A, B, C, sold;

	scanf("%d %d %d", &A, &B, &C);
	if (B >= C)
    {
        printf("-1");
        return 0;
    }
	sold = A / (C - B) + 1;

	if (sold <= 0) printf("-1");
	else printf("%d", sold);
}


