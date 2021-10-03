//Problem Link -: https://leetcode.com/problems/linked-list-cycle-ii/


//Solution -:

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
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL or head -> next == NULL or head->next->next == NULL) {
            return NULL;
        }
        ListNode *p1 = head;
        ListNode *p2 = head;
        int flag = 0;
        while (p1 != NULL and p2 != NULL and p2 -> next != NULL) {
            p1 = p1->next;
            p2 = p2->next->next;
            if (p1 == p2) {
                flag++;
                break;
            }
        }
        if (flag == 0) {
            return NULL;
        }
        else {
            p1 = head;
            while (p1 != p2) {
                p1 = p1->next;
                p2 = p2->next;
            }
            return p1;
        }
    }
};