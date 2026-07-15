class Solution {
    public:
        ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
            ListNode* A=list1;
            for(int i=0;i<a-1;i++){
               A=A->next;
            }
    
            ListNode* B=A;
            for(int i=0;i<=b-a+1;i++){
                B=B->next;
            }
    
            A->next=list2;
            ListNode* tail=list2;
            while(tail->next){
                tail=tail->next;
            }
            tail->next=B;
            return list1;
        }
    };