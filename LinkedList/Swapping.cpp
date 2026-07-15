class Solution {
    public:
        ListNode* swapNodes(ListNode* head, int k) {
            ListNode* fast=head;
            for(int i=1;i<k;i++){
                fast=fast->next;
            }
            ListNode* first=fast;
            ListNode* slow=head;
            while(fast->next){
                slow=slow->next;
                fast=fast->next;
            }
            ListNode* second=slow;
            swap(first->val,second->val);
            return head;
        }
    };