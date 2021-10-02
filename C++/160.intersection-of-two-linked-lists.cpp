// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem160.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;
        while (ptr1!=ptr2){
            if (!ptr1) {
                ptr1 = headB;
            }else{
                ptr1 = ptr1->next;
            }
            if (!ptr2) {
                ptr2 = headA;
            }else{
                ptr2 = ptr2->next;
            }
        }
        return ptr1;
    }
};
// @lc code=end

