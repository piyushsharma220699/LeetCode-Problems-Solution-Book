/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        //reversing the slow
        ListNode *slow_prev = slow;
        slow = slow->next;
        slow_prev->next = nullptr;
        while (slow) {
            ListNode *tmp = slow->next;
            slow->next = slow_prev;
            slow_prev = slow;
            slow = tmp;
        }
        ListNode *p1 = head;
        ListNode *p2 = slow_prev;
        while (p1 && p2) {
            if (p1->val != p2->val) return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};
// @lc code=end

