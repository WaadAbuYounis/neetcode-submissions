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
    ListNode* reverseList(ListNode* head) {
        ListNode* before = nullptr;
        ListNode* curr = head;
        while(curr){
            ListNode* nxt = before;
            before = curr;
            curr= curr->next;
            before->next = nxt;
        }
        return before;
            
    }
    void merge(ListNode* head1, ListNode* head2){
        ListNode* curr1 = head1;
        ListNode* curr2 = head2;

        while(curr1 && curr2){
            ListNode* nxt = curr1->next;
            ListNode* nxt2 = curr2->next;
            curr1->next = curr2;
            if(nxt) curr2->next= nxt;
            curr1 = nxt;
            curr2 = nxt2;
        }
        
    }

    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode* curr = head;
        int len = 0;
        while(curr){ // to find len
            len++;
            curr = curr->next;
        }
        ListNode* head2 = head->next;
        curr = head;
        for(int i = 0 ; i < len/2 - 1 ; i ++){ //to find head of sec half
            curr=  curr->next;
            head2 = head2->next;
        }
        curr->next = nullptr;
        head2 = reverseList(head2);
        merge(head,head2);
    }
};
