class Solution
{
public:
    // Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        Node *current = head;
        int count = 1;
        while (count < k && current != NULL)
        {
            current = current->next;
            count++;
        }
        if (current == NULL)
            return NULL;
        Node *kthNode = current;
        while (current->next != NULL)
            current = current->next;
        current->next = head;
        head = kthNode->next;
        kthNode->next = NULL;

        return head;
    }
};
