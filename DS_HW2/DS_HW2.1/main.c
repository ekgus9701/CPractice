#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct{
	int row;
	int col;
	int value;
}element;

typedef struct SparseMatrix{
	element data[MAX];
	int rows;
	int cols;
	int terms;
}SparseMatrix;

SparseMatrix matrix_transpose2(SparseMatrix a){
	SparseMatrix b;
	int i=0;
	int c=0;

	int bindex;
	b.rows = a.cols;
	b.cols = a.rows;
	b.terms = a.terms;

	if(a.terms>0){
		bindex=0;
		for(c=0;c<a.cols;c++){
			for(i=0;i<a.terms;i++){
				if(a.data[i].col==c){
					b.data[bindex].row=a.data[i].col;
					b.data[bindex].col=a.data[i].row;
					b.data[bindex].value=a.data[i].value;
					bindex++;
				}
			}
		}
	}
		return b;
}

void matrix_print(SparseMatrix a){
	int i=0;
	printf("=======================\n");
	for(i=0;i<a.terms;i++){
		printf("(%d, %d, %d) \n",a.data[i].row, a.data[i].col, a.data[i].value);
	}
	printf("=======================\n\n");
}

void dense_print(SparseMatrix a){
	int i=0,j=0,k=0;
	printf("dense matrix\n\n");
	for(i=0;i<a.rows;i++){
			for(j=0;j<a.cols;j++){
				if(a.data[k].row==i && a.data[k].col==j){
					printf("%d ",a.data[k].value);
					k++;
				}
				else
					printf("0 ");
		}
			printf("\n");
	}
	printf("=======================\n");

}

int main(void){
	//Add B as an input. Use your own example freely.
	SparseMatrix k = {
		{{0,3,7},{1,0,9},{1,5,8},{3,0,6},{3,1,5},{4,5,1},{5,2,2}},
		6,
		6,
		7
	};
	SparseMatrix tr;
	//Perform the transpose operation
	tr = matrix_transpose2(k);
	matrix_print(tr);

	//Print out B and B^T in a dense matrix form to check
	//Whether the operation works correctly.
	
	dense_print(k);
	printf("\n");
	dense_print(tr);

	return 0;

}
