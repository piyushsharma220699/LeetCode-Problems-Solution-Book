using System.Collections.Generic;
using System.Linq;
using System;
using System.Text;

namespace RemoveNthNodeFromEndOfList
{
   /// <summary>
   /// more solutions on: https://github.com/pakosel/leetcode-solutions
   /// </summary>
   public class Solution
   {
      public ListNode RemoveNthFromEnd(ListNode head, int n)
      {
         ListNode next = head;
         while (n >= 0 && next != null)
         {
            next = next.next;
            n--;
         }
         if (next == null && n == 0) //test case no.4
            return head.next;

         ListNode prevToRemove = head;
         while (next != null)
         {
            next = next.next;
            prevToRemove = prevToRemove.next;
         }

         prevToRemove.next = prevToRemove.next.next;

         return head;
      }
   }

   public class ListNode
   {
      public int val;
      public ListNode next;
      public ListNode(int val = 0, ListNode next = null)
      {
         this.val = val;
         this.next = next;
      }
   }
}