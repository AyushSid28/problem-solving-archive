class Solution {
    public:
        ListNode* deleteMiddle(ListNode* head) {
         
            ListNode* slow=head;
            ListNode* fast=head->next->next;
            if(head==NULL || head->next==NULL){
                delete head;
                return NULL;
            }
            while(fast!=nullptr && fast->next!=nullptr){
               
                slow=slow->next;
                fast=fast->next->next;
                
            }
            ListNode* mid=slow->next;
            slow->next=slow->next->next;
            delete mid;
            
            return head;
        }
    };