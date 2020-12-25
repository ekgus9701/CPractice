#include <stdio.h>
#include <stdlib.h>

double*** mem_alloc_3D_double(int w,int h,int m){
	double ***arr=(double ***)malloc(sizeof(double**)*w);
	int i=0,j=0,k=0;
	int cnt=1;
	printf("double 형의 3D array를 allocate\n\n");
	printf("##########################################\n\n");
	for(i=0;i<w;i++){
		arr[i]=(double **)malloc(sizeof(double*)*h);
		for(j=0;j<h;j++){
			arr[i][j]=(double*)malloc(sizeof(double)*m);
		}
	}
	
	printf("3D array에 값을 넣어줌\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				arr[i][j][k]= cnt;
				printf("%f\t",arr[i][j][k]);
				cnt++;
			}
			printf("\n");
		}
		printf("\n");
	}


	printf("##########################################\n\n");
	

	return arr;
}


void mem_dealloc_3D_double(int w,int h,int m, double ***arr){
	int i=0,j=0,k=0;
	printf("동적으로 할당한 메모리 해제\n\n");
	for(w;w==0;w--){
		for(h;h==0;h--){
			free(arr[w][h]);
			
		}
		free(arr[w]);

	}
	free(arr);
	arr=NULL;
	printf("##########################################\n\n");
}

void addition_3D(double ***A, double ***B){
	double C;
	int i=0,j=0,k=0;
	printf("double 형의 두 3D array를 더함\n\n");
	

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				C=A[i][j][k]+B[i][j][k];
				printf("%f\t",C);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("##########################################\n\n");
	
}

int main(void){
	int i=0,j=0,k=0;
	
	double***(*allo)(int,int,int)=mem_alloc_3D_double;
	
	//Define two matrices A and B using 'mem_alloc_3D_double'
	double ***A= allo(3,3,3);
	double ***B= allo(3,3,3);
	
	//Perform addition of two matrices using 'addition_3D()'
	addition_3D(A, B);
	
	//Deallocate A and B
	mem_dealloc_3D_double(3,3,3,A);
	mem_dealloc_3D_double(3,3,3,B);
	
	return 0;
}



		


