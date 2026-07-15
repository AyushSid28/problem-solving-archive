class Solution {
    public:
        int pairSum(ListNode* head) {
            ListNode* slow=head;
            ListNode* fast=head;
            while(fast && fast->next){
                slow=slow->next;
                fast=fast->next->next;
            }
            ListNode* prev=NULL;
            while(slow){
                ListNode* next=slow->next;
                slow->next=prev;
                
                prev=slow;
                slow=next;
            }
            int maxsum=0;
            ListNode* left=head;
            ListNode* right=prev;
            while(right){
                maxsum=max(maxsum,left->val+right->val);
                left=left->next;
                right=right->next;
            }
            return maxsum;
        }
    };