/*Link Of Question : https://leetcode.com/problems/next-permutation/
31. Next Permutation
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.
*/
//Solution : 

/* Algorithm:
Step 1: Find the largest index i, such that A[i]<A[i+1]. If not exist, this is the last permutation, in that case just sort and return.
Step 2: Find the largest index j, such that A[j]>A[i].
Step 3: Swap A[i] and A[j].
Step 4: Reverse A[i+1] to the end.
*/
class Solution {
  public:
    void nextPermutation(vector < int > & A) {
      int i, j;
      int n = A.size();
      for (i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) break;
      }
      if (i < 0) {
        reverse(A.begin(), A.end());
        return;
      } else {
        for (j = n - 1; j > i; j--) {
          if (A[j] > A[i]) {
            break;
          }
        }
        swap(A[j], A[i]);
        reverse(A.begin() + i + 1, A.end());

      }
      return;
    }
};

/*
Sample Input: nums = [1,2,3]
Sample Output: [1,3,2]
Time Complexity : O(N)
Space Complexity : O(1)
*/