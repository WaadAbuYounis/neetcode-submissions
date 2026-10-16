# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        before = None
        curr = head
        
        while curr != None:
            nxt = before
            before = curr
            curr = curr.next
            before.next = nxt
        return before

        
        