/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // its the same as removing the node at length(linkedlist) - n;
        int len = 0;
        ListNode* curr = head;
        while(curr){
            len++;
            curr = curr->next;
        }
        if(len == 1 && n == 1) return nullptr;

        int counter = 0; //when we reach len-n it's the node we want to remove
        curr = head;
        ListNode* before = nullptr;
        while(curr){
            if(counter == len-n){
                if(!before) return head->next;
                before->next = curr->next;
                return head;
            }
            counter++;
            before = curr;
            curr = curr->next;
        }
        return head;
        
    }
};
