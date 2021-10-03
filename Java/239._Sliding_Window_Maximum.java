/*Link Of Question : https://leetcode.com/problems/sliding-window-maximum/
239. Sliding Window Maximum
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.
*/
//Solution :
class Solution {
    public int[] maxSlidingWindow(int[] a, int k) {
        int n = a.length;
        int[] res = new int[n - k + 1];
        Deque<Integer> dq = new ArrayDeque<Integer>();
        int i=0,j=0,l=0;
        while(j < n) {
            while(dq.size() > 0 && a[j] > dq.peekLast()){
                dq.pollLast();
            }
            dq.add(a[j]);     
			
            if(j-i+1 < k) j++;
			
            else if(j-i+1==k) {
              res[l++] = dq.peekFirst();
                if(dq.peekFirst()==a[i]) {
                    dq.remove(a[i]);
                }
                i++;
                j++;
            }
        }
        return res;
    }
}


// Example 1:
// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7


// Example 2:
// Input: nums = [1], k = 1
// Output: [1]