#include <stdio.h>
#include <stdlib.h>
#define INF 1000L

// A structure to represent a node in adjacency list
struct ListNode {
    int dest;
    int weight;
    struct ListNode* next;
};

// A structure to represent an adjacency list
struct List {
    struct ListNode* head; // pointer to head node of list
};

// A structure to represent a graph. A graph is an array of adjacency lists.
// Size of array will be V (number of vertices in graph)
struct Graph {
    int V;
    struct List* array;
};

// A utility function to create a new adjacency list node
struct ListNode* newAdjListNode(int dest, int weight)
{
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->dest = dest;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}

// A utility function that creates a graph of V vertices
struct Graph* createGraph(int V)
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;

    // Create an array of adjacency lists.  Size of array will be V
    graph->array = (struct List*)malloc(V * sizeof(struct List));

    // Initialize each adjacency list as empty by making head as NULL
    for (int i = 0; i < V; ++i)
        graph->array[i].head = NULL;

    return graph;
}

void addEdge(struct Graph* graph, int src, int dest, int weight)
{
    // Add an edge from src to dest.  A new node is added to the adjacency
    // list of src.  The node is added at the beginning
    struct ListNode* newNode = newAdjListNode(dest, weight);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    // Since graph is undirected, add an edge from dest to src also
    newNode = newAdjListNode(src, weight);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// Structure to represent a min heap node
struct minHeapNode {
    int v;
    int key;
};

// Structure to represent a min heap
struct minHeap {
    int size; // Number of heap nodes present currently
    int capacity; // Capacity of min heap
    int* pos; // This is needed for decreaseKey()
    struct minHeapNode** array;
};

// A utility function to create a new Min Heap Node
struct minHeapNode* newMinHeapNode(int v, int key)
{
    struct minHeapNode* minHeapNode = (struct minHeapNode*)malloc(sizeof(struct minHeapNode));
    minHeapNode->v = v;
    minHeapNode->key = key;
    return minHeapNode;
}

// A utilit function to create a Min Heap
struct minHeap* createMinHeap(int capacity)
{
    struct minHeap* minHeap = (struct minHeap*)malloc(sizeof(struct minHeap));
    minHeap->pos = (int*)malloc(capacity * sizeof(int));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (struct minHeapNode**)malloc(capacity * sizeof(struct minHeapNode*));
    return minHeap;
}

// A utility function to swap two nodes of min heap. Needed for min heapify
void swapMinHeapNode(struct minHeapNode** a, struct minHeapNode** b)
{
    struct minHeapNode* t = *a;
    *a = *b;
    *b = t;
}

void bulld_min_heap(struct minHeap* minHeap, int idx)
{
    int smallest, left, right;
    smallest = idx;
    left = 2 * idx + 1;
    right = 2 * idx + 2;

    if (left < minHeap->size && minHeap->array[left]->key < minHeap->array[smallest]->key)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->key < minHeap->array[smallest]->key)
        smallest = right;

    if (smallest != idx) {
        struct minHeapNode* smallestNode = minHeap->array[smallest];
        struct minHeapNode* idxNode = minHeap->array[idx];

        minHeap->pos[smallestNode->v] = idx;
        minHeap->pos[idxNode->v] = smallest;

        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);

        bulld_min_heap(minHeap, smallest);
    }
}

int isEmpty(struct minHeap* minHeap)
{
    return minHeap->size == 0;
}

struct minHeapNode* delete_min_heap(struct minHeap* minHeap)
{
    if (isEmpty(minHeap))
        return NULL;

    struct minHeapNode* root = minHeap->array[0];

    struct minHeapNode* lastNode = minHeap->array[minHeap->size - 1];
    minHeap->array[0] = lastNode;
    minHeap->pos[root->v] = minHeap->size - 1;
    minHeap->pos[lastNode->v] = 0;

    --minHeap->size;
    bulld_min_heap(minHeap, 0);

    return root;
}

void Decrease_key_min_heap(struct minHeap* minHeap, int v, int key)
{
    int i = minHeap->pos[v];
    minHeap->array[i]->key = key;
    while (i && minHeap->array[i]->key < minHeap->array[(i - 1) / 2]->key) {
       
        minHeap->pos[minHeap->array[i]->v] = (i - 1) / 2;
        minHeap->pos[minHeap->array[(i - 1) / 2]->v] = i;
        swapMinHeapNode(&minHeap->array[i], &minHeap->array[(i - 1) / 2]);

        i = (i - 1) / 2;
    }
}

int isInMinHeap(struct minHeap* minHeap, int v)
{
    if (minHeap->pos[v] < minHeap->size)
        return 1;
    return 0;
}


void printArr(int arr[], int n, int key[])
{
    for (int i = 1; i < n; ++i)
        printf("Vertex: %d -> %d      edge:%d \n", arr[i], i, key[i]);
}


void printPrim(struct Graph* graph)
{
    int V = graph->V; 
    int parent[100];
    int key[100]; 
    struct minHeap* minHeap = createMinHeap(V);
    for (int v = 1; v < V; ++v) {
        parent[v] = -1;
        key[v] = INF;
        minHeap->array[v] = newMinHeapNode(v, key[v]);
        minHeap->pos[v] = v;
    }
    key[0] = 0;
    minHeap->array[0] = newMinHeapNode(0, key[0]);
    minHeap->pos[0] = 0;

    minHeap->size = V;

    while (!isEmpty(minHeap)) {
       
        struct minHeapNode* minHeapNode = delete_min_heap(minHeap);
        int u = minHeapNode->v; 

        struct ListNode* p = graph->array[u].head;
        while (p != NULL) {
            int v = p->dest;

            if (isInMinHeap(minHeap, v) && p->weight < key[v]) {
                key[v] = p->weight;
                parent[v] = u;
                Decrease_key_min_heap(minHeap, v, key[v]);
            }
            p = p->next;
        }
    }

    printArr(parent, V, key);
}

int main()
{
   
    int V = 8;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1, 3);
    addEdge(graph, 0, 7, 14);
    addEdge(graph, 1, 2, 8);
    addEdge(graph, 1, 7, 10);
    addEdge(graph, 2, 3, 15);
    addEdge(graph, 2, 4, 2);
    addEdge(graph, 4, 5, 9);
    addEdge(graph, 4, 6, 4);
    addEdge(graph, 4, 7, 5);
    addEdge(graph, 6, 7, 6);

    printPrim(graph);

    return 0;
}

