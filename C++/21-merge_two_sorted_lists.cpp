/*Link for Question : https://leetcode.com/problems/merge-two-sorted-lists/
21. Merge Two Sorted Lists

Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.
*/
//Solution : 

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL) {
            return l2;
        }
        
        if(l2 == NULL) {
            return l1;
        }
        
        ListNode* res;
        if(l1->val <= l2->val) {
            
            res = l1;
            res->next = mergeTwoLists(l1->next, l2);
        }
        
        else{
            res = l2;
            res->next = mergeTwoLists(l1, l2->next);
        }
        
        return res;
    }
};

/*
Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
Time Complexity : O(N)
Space Complexity : O(1)
N = size of given array

*/