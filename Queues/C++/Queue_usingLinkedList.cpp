// Problem Statement : Build a queue using Linked List .


#include <bits/stdc++.h>
using namespace std ;

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct Queue
{
    struct ListNode *front;
    struct ListNode *rear;
};

struct Queue *createQueue()
{
    struct Queue *Q;
    struct ListNode *tmp;

    Q = malloc(sizeof(struct Queue));

    if (!Q)
        return NULL;

    tmp = malloc(sizeof(struct ListNode));

    Q->front = Q->rear = NULL;

    return Q;
}

int size(struct Queue *Q)
{
    struct ListNode *tmp = Q->front;
    int count = 0;

    if (Q->front == NULL && Q->rear == NULL)
        return 0;

    while (tmp != Q->rear)
    {
        count++;
        tmp = tmp->next;
    }
    if (tmp == Q->rear)
        return ++count;
}

int frntEle(struct Queue *Q)
{
    return Q->front->data;
}

int rearEle(struct Queue *Q)
{
    return Q->rear->data;
}

bool isEmpty(struct Queue *Q)
{
    if (Q->front == NULL && Q->rear == NULL)
    {
        printf("\nQueue is Empty\n");
        return 1;
    }

    printf("\nQueue is NOT Empty\n");
    return 0;
}

void enQueue(struct Queue *Q, int val)
{
    struct ListNode *tmp;
    tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
    tmp->data = val;
    tmp->next = NULL;

    if (Q->rear == NULL)
    {
        Q->front = Q->rear = tmp;
    }
    else
    {
        Q->rear->next = tmp;
        Q->rear = tmp;
    }
}

void deQueue(struct Queue *Q)
{
    struct ListNode *tmp;
    if (Q->front == NULL)
    {
        printf("\nQueue is Empty\n");
        return;
    }

    else
    {
        tmp = Q->front;
        Q->front = Q->front->next;

        if (Q->front == NULL)
            Q->rear = NULL;

        cout << "Removed element : \n" << tmp->data;
        free(tmp);
    }
}

void printQueue(struct Queue *Q)
{
    struct ListNode *tmp = Q->front;
    if (Q->front == NULL && Q->rear == NULL)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    while (tmp != NULL)
    {
        cout << tmp->data << " " ;
        tmp = tmp->next;
    }
}

void deleteQueue(struct Queue *Q)
{
    struct ListNode *tmp;
    while (!Q->front)
    {
        tmp = Q->front;
        Q->front = Q->front->next;
        free(tmp);
    }

    free(Q);
}

int main()
{
    // Initializing a queue .
    struct Queue *Q;
    Q = createQueue();

    // Adding elements in Queue .
    enQueue(Q, 1);
    enQueue(Q, 19);
    enQueue(Q, 15);
    enQueue(Q, 1113);
    enQueue(Q, 801);
    enQueue(Q, 78);

    //Printing Queue
    printQueue(Q);


    //Printing front & rear Element in the Queue
    cout << "Front Element : \n" << frntEle(Q);
    cout << "Rear Element : \n" << rearEle(Q);

    // Dequeueing element
    deQueue(Q);
    deQueue(Q);
    deQueue(Q);
    deQueue(Q);
    // deQueue(Q);

    printQueue(Q);
    cout << "\nSize of the queue is " << size(Q) ;

    //Deleting the Queue .
    deleteQueue(Q);

    return 0;
}

/* Input : Q : 1 19 15 1113 801 78

   Output : Front Element : 1
            Rear Element : 78
            Removed Element : 1
            Removed Element : 19
            Removed Element : 15
            Removed Element : 1113
            Q : 801 78
            Size of the queue is 2 
    
 */
   
