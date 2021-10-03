'''
Link of Question: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

Problem: Given the head of a linked list, remove the nth node from the end of the list and return its head.

Disclaimer : This might not work in your system as input was handled by leetcode only, you can run this code as it is on the problem link

Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Input: head = [1], n = 1
Output: []

Input: head = [1,2], n = 1
Output: [1]

Space COmplexity: O(n) | Time Complexity: O(n)
'''


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        temp = head

        prev = None
        list_len = 0

        while temp:
            list_len += 1
            temp = temp.next
        k = list_len - n

        ptr = head
        prev = None
        for i in range(k):
            prev = ptr
            ptr = ptr.next

        if prev is None:
            return head.next
        else:
            prev.next = ptr.next
            ptr.next = None
        return head
