/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return nullptr;
        ListNode* prev = head;
        while(prev->next){
            if (prev->next->val == val) {
                prev->next = prev->next->next;
            }else{
                prev = prev->next;
            }
        }
        if (head->val == val) {
            return head->next;
        }
        return head;
    }
};
// @lc code=end

