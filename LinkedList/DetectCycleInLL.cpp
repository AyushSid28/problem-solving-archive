// Problem Statement: Given a Linked List, determine whether the linked list contains a cycle or not.

// Examples
// Input: LL: 1 2 3 4 5

// Output: True
// Explanation: The last node with the value of 5 has its 'next' pointer pointing back to a previous node with the value of 3. This has resulted in a loop, hence we return true.



class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode* slow=head;
            ListNode* fast=head;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast){
                    return true;
                }
            }
            return false;
        }
    };