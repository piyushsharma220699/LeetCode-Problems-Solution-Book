/*Link Of Question : https://leetcode.com/problems/merge-k-sorted-lists/
23. Merge k Sorted Lists
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.
*/
//Solution : 

class Solution
{
public:
    //Merge K Sorted lists is extended version of Merge Two Lists.
    //Take 3 Lists to be merged be l1,l2,l3, approach here is to merge first two.
    //l1+l2, and then merge (l1+l2) to l3.
    //we can make use of merge two lists function of leetcode 21.
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {

        //base condition
        if (lists.size() == 0)
        {
            return NULL;
        }

        //Now, Idea here is to merge first two ListNodes from lists, and then push it back to lists.
        //then remove those first two from the list.
        //by repeating this till size is > 1, we will have the first ListNode of lists as the merged list
        while (lists.size() > 1)
        {

            lists.push_back(mergeTwoLists(lists[0], lists[1]));

            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }

        return lists[0];
    }

    //Merge Two Lists from Leetcode 21
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *third, *last; //Extra Array third and last

        //Base Conditions
        if (l1 == NULL && l2 != NULL)
            return l2;
        if (l1 != NULL && l2 == NULL)
            return l1;
        if (l1 == NULL && l2 == NULL)
            return NULL;

        //This check will assign third its first value
        if (l1->val < l2->val)
        {
            third = l1;
            last = l1;
            l1 = l1->next;
            last->next = NULL;
        }
        else
        {
            third = l2;
            last = l2;
            l2 = l2->next;
            last->next = NULL;
        }

        while (l1 != NULL && l2 != NULL) //loop till any one of the list is empty
        {
            if (l1->val < l2->val) //add to third list the smaller value
            {
                last->next = l1;
                last = l1;
                l1 = l1->next;
                last->next = NULL;
            }
            else
            {
                last->next = l2;
                last = l2;
                l2 = l2->next;
                last->next = NULL;
            }
        }

        //Adding the remaining list, if any
        if (l1 != NULL)
        {
            last->next = l1;
        }
        if (l2 != NULL)
        {
            last->next = l2;
        }

        return third;
    }
};

/*
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6

Time Comeplexity : O(n*log(k))
Space Complexity : O(n)
*/
