class Solution {
    public:
        ListNode* partition(ListNode* head, int x) {
            ListNode leftV(0),rightV(0);
            ListNode* left=&leftV;
            ListNode* right=&rightV;
            if(head==NULL) return NULL;
    
            ListNode* temp=head;
            while(temp){
                if(temp->val<x){
                    left->next=temp;
                    left=left->next;
                }
                else{
                    right->next=temp;
                    right=right->next;
                }
                temp=temp->next;
            }
            right->next=NULL;
            left->next=rightV.next;
            return leftV.next;
        }
    };