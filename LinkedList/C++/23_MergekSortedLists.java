class Solution
{
public:
    // QUESTION ::: You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.Merge all the linked-lists into one sorted linked-list and return it.
    
   ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nums;
        
        //store all node val in nums
        for(auto it: lists){
            while(it != NULL){
                nums.push_back(it->val);
                it = it->next;
            }
        }
        
        
        //sort the vector
        sort(nums.begin(), nums.end());
        
       //make Linked-list with this sorted values
       int n = nums.size();
       ListNode* ans = new ListNode(NULL);
       ListNode* cur = ans;
       
       for(int i=0; i<nums.size(); i++){
           cur->next = new ListNode(nums[i]);
           cur = cur->next;
       }
        
        return ans->next;
    }
};
