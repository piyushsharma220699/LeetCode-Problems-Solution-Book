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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        int carry=0;
        ListNode *ans=NULL,*prev=NULL;
        while(l1!=NULL||l2!=NULL||carry>0){
            int num1,num2;
            if(l1==NULL)
                num1=0;
            else{
                num1=l1->val;
                l1=l1->next;
            }
            if(l2==NULL)
                num2=0;
            else{
                num2=l2->val;
                l2=l2->next;
            }
            int res=(num1+num2+carry)%10;
            carry=(num1+num2+carry)/10;
            if(prev==NULL){
                ans=new ListNode(res);
                prev=ans;
            }
            else{
                ListNode *temp=new ListNode(res);
                prev->next=temp;
                prev=temp;
            }
        }
        prev->next=NULL;
        return ans;
    }
};
