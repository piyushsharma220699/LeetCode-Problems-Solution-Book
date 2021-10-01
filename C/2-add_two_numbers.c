/* Link Of Question: https://leetcode.com/problems/add-two-numbers/

2. Add Two Numbers
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a 
single digit. Add the two numbers and return the sum as a linked list.
*/

//Solution


/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
 int carry=0;
        struct ListNode *st,*t1,*t2;
        struct ListNode *start=(struct ListNode*)malloc(sizeof(struct ListNode));
        t1=l1;
        t2=l2;
        st=start;
        while(t1!=NULL && t2!=NULL)
        {
            if((t1->val+t2->val+carry)>9)
            {
                start->val=(t1->val+t2->val+carry)%10;
                carry=1;
            }
            else
            {
                start->val=t1->val+t2->val+carry;
                carry=0;
            }
            t1=t1->next;
            t2=t2->next;
            if(t1==NULL && t2==NULL)
                start->next=NULL;
            else
            {
                start->next=(struct ListNode*)malloc(sizeof(struct ListNode));
                start=start->next;
            }
        }
    if(t1!=NULL)
    {
        while(t1!=NULL)
        {
            if((t1->val+carry)>9)
            {
                start->val=(t1->val+carry)%10;
                carry=1;
            }
            else
            {
                start->val=t1->val+carry;
                carry=0;
            }
            t1=t1->next;
            if(t1==NULL)
                start->next=NULL;
            else
            {
                start->next=(struct ListNode*)malloc(sizeof(struct ListNode));
                start=start->next;
            }
        }
    }
    else if(t2!=NULL)
        {
        while(t2!=NULL)
        {
            if((t2->val+carry)>9)
            {
                start->val=(t2->val+carry)%10;
                carry=1;
            }
            else
            {
                start->val=t2->val+carry;
                carry=0;
            }
            t2=t2->next;
            if(t2==NULL)
                start->next=NULL;
            else
            {
                start->next=(struct ListNode*)malloc(sizeof(struct ListNode));
                start=start->next;
            }
        }
    }

       if(carry==1)
       {
           start->next=(struct ListNode*)malloc(sizeof(struct ListNode));
                start=start->next;
           start->val=carry;
           start->next=NULL;
       }
        return st;
}

/*
Sample Input: l1 = [2,4,3], l2 = [5,6,4]
Sample Output: [7,0,8]
Time Complexity: O(N) where N is the number of nodes in Linked List
Space Complexity: O(N) 
*/
