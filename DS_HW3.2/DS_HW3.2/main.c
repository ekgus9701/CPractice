#include <stdio.h>
#include <stdlib.h>
//1971055 한다현

typedef int element;
typedef struct ListNode{
	element data;
	struct ListNode *link;
}ListNode;

void insert_node(ListNode **phead, ListNode *p,ListNode *new_node){
	if(*phead==NULL){
		new_node->link=NULL;
		*phead=new_node;
	}
	else if(p==NULL){
		new_node->link=*phead;
		*phead=new_node;
	}
	else{
		new_node->link=p->link;
		p->link=new_node;
	}
}

void display(ListNode *head){
	ListNode *p=head;
	while(p!=NULL){
		printf("%d->",p->data);
		p=p->link;
	}
	printf("\n");
}

ListNode *concat(ListNode *head1, ListNode *head2){
	ListNode *p;
	if(head1==NULL) return head2;
	else if(head2==NULL) return head1;
	else{
		p=head1;
		while(p->link!=NULL)
			p=p->link;
		p->link=head2;
		return head1;
		
	}
}

ListNode *create_node(element data,ListNode *link){
	ListNode *new_node;
	new_node=(ListNode *)malloc(sizeof(ListNode));
	if(new_node==NULL)
		printf("메모리 할당 에러");
	new_node->data=data;
	new_node->link=link;
	return(new_node);
}

void swap(ListNode *a,ListNode *b){
	int temp=a->data;
	a->data=b->data;
	b->data=temp;
}

void bubbleSort(ListNode *start){
	int swapped,i;
	ListNode *ptr1;
	ListNode *lptr=NULL;

	if(start==NULL)
		return;

	do{
		swapped=0;
		ptr1=start;

		while(ptr1->link!=lptr){
			if(ptr1->data > ptr1->link->data){
				swap(ptr1,ptr1->link);
				swapped=1;
			}
			ptr1=ptr1->link;
		}
		lptr=ptr1;
	}
	while(swapped);
}




int main(){

	ListNode *list1=NULL;
	ListNode *list2=NULL;
	ListNode *p;

	insert_node(&list1,NULL,create_node(25,NULL));
	insert_node(&list1,NULL,create_node(20,NULL));
	insert_node(&list1,NULL,create_node(15,NULL));
	insert_node(&list1,NULL,create_node(10,NULL));
	insert_node(&list1,NULL,create_node(5,NULL));
	insert_node(&list1,NULL,create_node(2,NULL));
	insert_node(&list1,NULL,create_node(1,NULL));

	display(list1);

	insert_node(&list2,NULL,create_node(30,NULL));
	insert_node(&list2,NULL,create_node(18,NULL));
	insert_node(&list2,NULL,create_node(15,NULL));
	insert_node(&list2,NULL,create_node(8,NULL));
	insert_node(&list2,NULL,create_node(7,NULL));
	insert_node(&list2,NULL,create_node(3,NULL));

	display(list2);

	list1=concat(list1,list2);
	display(list1);

	bubbleSort(list1);// list1의 개수만큼 
	display(list1);


}

	
	

	



