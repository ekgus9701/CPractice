#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>
//1971055 한다현

typedef int element;
typedef struct DlistNode{
	element data;
	struct DlistNode *llink;
	struct DlistNode *rlink;
}DlistNode;

void init(DlistNode *phead){
	phead->llink=phead;
	phead->rlink=phead;
}

void display(DlistNode *phead){
	DlistNode *p;
	for(p=phead ->rlink; p!=phead; p=p->rlink){
		printf("<--- |  %d  | --->  ",p->data);
	}
	printf("\n");
}
void dinsert_node(DlistNode *before, DlistNode *new_node){ //dinsert_first_node와 같은역할
	new_node->llink=before;
	new_node->rlink = before ->rlink;
	before->rlink->llink=new_node;
	before->rlink = new_node;
}

void dinsert_last_node(DlistNode *before,DlistNode *new_node){
	new_node->llink=before->llink;
	new_node->rlink=before->llink->rlink;
	before->llink->rlink=new_node;
	before->llink=new_node;
}

void main(){
	DlistNode *head_node=(DlistNode*)malloc(sizeof(DlistNode));
	DlistNode *p[10];
	int i;
	init(head_node);
	for(i=0;i<5;i++){
		p[i]=(DlistNode *)malloc(sizeof(DlistNode));
		p[i]->data=i;
		dinsert_node(head_node,p[i]);
	}
	display(head_node);

	init(head_node);
	for(i=0;i<5;i++){
		p[i]=(DlistNode *)malloc(sizeof(DlistNode));
		p[i]->data=i;
		dinsert_node((head_node->llink),p[i]);
	}
	display(head_node);
}