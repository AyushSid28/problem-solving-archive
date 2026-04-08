//Reverse a Linked List

// Example 1:
// Input:
//  LL: 1 2 3 4 5 
// Output:
//  5 4 3 2 1 


class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
     
           ListNode* curr=head;
           ListNode* prev=nullptr;
           ListNode* next=nullptr;
    
           while(curr!=nullptr){
              next=curr->next;
              curr->next=prev;
              prev=curr;
              curr=next;
              
           }
           return prev;
           
        }
    };