#include <iostream>

 // Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode();
        dummy -> next = head;
        ListNode *slow, *fast = dummy;

        for(int i = 1; i<n; i++){
            fast = fast -> next;
        }
        while(fast -> next != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
        slow -> next = slow ->next -> next;
        return dummy -> next; 
    }
};

/*
1 -> 2 -> 3 -> 7 -> 4 -> 5 -> 6
n = 4
retrun
1 -> 2 -> 3 -> 4 -> 5 -> 6
for this problem, we take two pointers, and first iterate the fast one ahead to n
and than iterate both fast and slow by one till fast points to the last node
at this point the slow pointer is pointing at n-size which the node we have to renmove
so, to remove slow -> next = slow -> next -> next
and then we return the list.
We introduce a dummy node for edge case, incase we have to remove head
*/
