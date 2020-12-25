#include <stdio.h>
int make_sum(int n){
	int a[1000]={0};
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	return sum;

	}

	