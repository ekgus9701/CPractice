#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int element;

typedef struct DlistNode {
	element data;
	struct DlistNode *llink;
	struct DlistNode *rlink;
}DlistNode;

typedef struct {
	DlistNode *top;
} LinkedStackType;

void init(LinkedStackType *s,DlistNode *head)
{
	head->llink=head;
	head->rlink=head;
	s->top = head;
}

int is_empty(LinkedStackType *s)
{
	return (s->top == NULL);
}

void push(LinkedStackType *s, element item,DlistNode *head )
{
	DlistNode *temp = (DlistNode *)malloc(sizeof(DlistNode));
	if (temp == NULL) {
		printf("Memory allocation error\n"); 
			return;
	}                           

	else {
		temp->data = item;
		temp->rlink = s->top; //temp�� rlink�� A�� ����
		temp->llink=head; //temp�� llink�� head�� ����
		s->top->llink=temp;//A�� llink�� temp�Ϳ���
		head->rlink=temp; //head�� rlink�� temp�� ����
		s->top = temp; //top�� temp�� �ٲ���
	}
}

element pop(LinkedStackType *s, DlistNode *head)
{
	if (is_empty(s)) {
		printf( "Stack is empty\n");
		exit(1);
	}
	else {
		DlistNode *temp = s->top;
		int item = temp->data;
		head->rlink=temp->rlink; //head�� rlink�� B�� ����
		s->top = s->top->rlink; //B�� top���� �ٲ���
		s->top->llink=head;//B�� llink�� head����
		
		free(temp);
		return item;
	}
}

element peek(LinkedStackType *s)
{
	if (is_empty(s)) {
		printf("Stack is empty\n");
		exit(1);
	}
	else {		
		return s->top->data;
	}
}

void main()
{
	LinkedStackType s;
	DlistNode head;
	init(&s,&head);
	push(&s, 1,&head);
	push(&s, 2,&head);
	push(&s, 3,&head);

	printf("%d\n", pop(&s,&head));
	printf("%d\n", pop(&s,&head));
	printf("%d\n", pop(&s,&head));
}


