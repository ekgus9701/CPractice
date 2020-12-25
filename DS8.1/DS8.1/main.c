#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENT 200

typedef struct {
    int key;
}element;

typedef struct {
    element heap[MAX_ELEMENT];
    int heap_size;
} HeapType;

void init(HeapType* h) {
    h->heap_size = 0;
}

void insert_min_heap(HeapType* h, element item) {
    int i;
    i = ++(h->heap_size);
    while ((i != 1) && (item.key < h->heap[i/2].key)) {
        h->heap[i] = h->heap[i/2];
        i /= 2;
    }
    h->heap[i] = item;

}

void increase_key_min_heap(HeapType* h, int i, int key) {
   
    if (key <= h->heap[i].key) {
        printf("New key is smaller than current key.\n");
        return 0;
    }
    
    while (i *2<= h->heap_size) {
        int temp = 0;
        int small = 0;

        if (h->heap[i * 2].key > h->heap[i * 2 + 1].key) {
            small = i * 2 + 1;
        }
        if (h->heap[i * 2].key <= h->heap[i * 2 + 1].key) {
            small = i * 2;
        }
        
        if (key <= h->heap[small].key) {
            break;
        }
        h->heap[i].key = h->heap[i * 2].key;
        i = i * 2;
    }
    h->heap[i].key = key;

}

void decrease_key_min_heap(HeapType* h, int i, int key) {
    int temp = 0;
    if (key >= h->heap[i].key) {
        printf("New key is larger than current key.\n");
        return -1;

    }
    h->heap[i].key = key;
    while (i > 1 && (h->heap[i].key < h->heap[i/2].key)) {
        temp = h->heap[i].key;
        h->heap[i].key = h->heap[i/2].key;
        h->heap[i/2].key = temp;
        i = i/2;
    }
}

int main(void) {
    HeapType h;
    init(&h);

    element e1 = { 1 }, e2 = { 4 }, e3 = { 2 }, e4 = { 7 }, e5 = { 5 };
    element e6 = { 3 }, e7 = { 3 }, e8 = { 7 }, e9 = { 8 }, e10 = { 9 };
    insert_min_heap(&h, e1);
    insert_min_heap(&h, e2);
    insert_min_heap(&h, e3);
    insert_min_heap(&h, e4);
    insert_min_heap(&h, e5);
    insert_min_heap(&h, e6);
    insert_min_heap(&h, e7);
    insert_min_heap(&h, e8);
    insert_min_heap(&h, e9);
    insert_min_heap(&h, e10);

    printf("basic one\n");
    for (int i = 1; i < h.heap_size+1; i++)
        printf("%d\n", h.heap[i].key);
    printf("\n");


    printf("decrease one\n");
    decrease_key_min_heap(&h, 4, 3);
    for (int i = 1; i < h.heap_size+1; i++)
        printf("%d\n", h.heap[i].key);
    printf("\n");
    

    printf("increase one\n");
    increase_key_min_heap(&h, 3, 10);
    for (int i = 1; i < h.heap_size+1; i++)
        printf("%d\n", h.heap[i].key);
    printf("\n");
    
}