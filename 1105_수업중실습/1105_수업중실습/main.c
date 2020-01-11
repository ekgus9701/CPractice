#include <stdio.h>

void bubble_sort(int *p, int n)
{
	int i,scan;
	for(scan=0; scan<n; scan++)
	{
		for(i=0;i<n-1;i++){
			if(p[i]>p[i+1]) 
				swap(&p[i],&p[i+1]);
		}
	}
}

void swap(int *px,int *py){
	int tmp;
	tmp=*px;
	*px=*py;
	*py=tmp;
}


