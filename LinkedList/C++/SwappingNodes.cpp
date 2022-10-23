// Question: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/


ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast=head,*end=head;
        while(k>1)
        {
            fast=fast->next;k--;
        }
        ListNode* start=fast;
        while(fast->next)
        {
            end=end->next;
            fast=fast->next;
        }
        swap(start->val,end->val);
        return head;   
    }
