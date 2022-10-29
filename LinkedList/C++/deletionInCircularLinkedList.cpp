//Problem Statement : Given a circular linked list , delete its last node. The last node refers to the node before the head in this case .

#include <bits/stdc++.h>
using namespace std ;

struct ListNode
{

    int data;
    struct ListNode *next;
};

void show(struct ListNode *head)
{
    struct ListNode *cur;
    cur = head;

    do
    {
        cout << cur->data << "->" ;
        cur = cur->next;
    } while (cur != head);
}

void deleteAtLast(struct ListNode *head)
{
    struct ListNode *temp = head, *curr = head;
    if(head == NULL)
    {
        printf("List empty!");
        return;
    }
    while (curr->next != head)
    {
        /* code */
        temp = curr;
        curr = curr->next;
    }
    temp->next = curr->next;
    free(curr);
    return;

}
int main()
{
    struct ListNode *head, *first, *second, *third, *fourth, *last;

    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    first = (struct ListNode *)malloc(sizeof(struct ListNode));
    second = (struct ListNode *)malloc(sizeof(struct ListNode));
    third = (struct ListNode *)malloc(sizeof(struct ListNode));
    fourth = (struct ListNode *)malloc(sizeof(struct ListNode));
    last = (struct ListNode *)malloc(sizeof(struct ListNode));

    head->data = 39;

    last->data = 6739;
    second->data = 298;
    third->data = 13;
    fourth->data = 167;
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = last;

    last->next = head;

    cout << "List after deletion :\n" ;

    deleteAtLast(head);
    show(head);

    return 0;
}

/* Input : 39->298->13->167->6739->

   Output : List after deletion :
            39->298->13->167->
            
*/
