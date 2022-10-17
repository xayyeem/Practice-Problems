class Solution
{
public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        stack<int> st;
        for (Node *curr = head; curr != NULL; curr = curr->next)
        {
            st.push(curr->data);
        }
        for (Node *curr = head; curr != NULL; curr = curr->next)
        {
            if (st.top() != curr->data)
            {
                return false;
            }
            st.pop();
        }
        return true;
    }
};
