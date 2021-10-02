/*
Problem Link : https://leetcode.com/problems/add-two-numbers/

2. Add Two Numbers
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/

// Solution

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newhead = new ListNode(0); 
        ListNode* curr = newhead;
        
        int carry = 0; // To store the carry of the sum of numbers
        
        // Iterate till minimum length of the two linked list.
        while(l1 != NULL & l2 != NULL){
            int sum = l1 -> val + l2 -> val;
            curr -> next = new ListNode((carry + sum) % 10);
            curr = curr -> next;
            carry = (carry + sum) / 10;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        
        // Might be the possibility that one list is exhausted other one isn't
      
      
        while(l1){
            curr -> next = new ListNode((carry + l1 -> val) % 10);
            carry = (carry + l1 -> val) / 10;
            curr = curr -> next;
            l1 = l1 -> next;
        }
        
        while(l2){
            curr -> next = new ListNode((carry + l2 -> val) % 10);
            carry = (carry + l2 -> val) / 10;
            curr = curr -> next;
            l2 = l2 -> next;
        }
        
        // At last if there is a carry present then create a new node for it.
        if(carry){
            curr -> next = new ListNode(carry);
        }
        
        return newhead -> next;
    }
};

/* 
Sample Input :  l1 = [2,4,3], l2 = [5,6,4]
Sample Output : [7, 0, 8]
Time Complexity : O(N)
Space Complexity : O(1)
N = max(l1.length, l2.length)
*/
