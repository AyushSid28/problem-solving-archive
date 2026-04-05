// Problem Statement: Given the head of a linked list of integers, determine the middle node of the linked list. However, if the linked list has an even number of nodes, return the second middle node.

// Examples
// Example 1:
// Input:
//  LL: 1  2  3  4  5 
                       


// Output:
//  3
                
// Explanation: 
// Node with value 3 is the middle node of this linked list.
                                         


class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
           ListNode* slow=head;
           ListNode* fast=head;
           while(fast!=nullptr && fast->next!=nullptr){
             slow=slow->next;
             fast=fast->next->next;
           }
           return slow;
        }
    };