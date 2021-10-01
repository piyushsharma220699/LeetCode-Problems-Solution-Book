/*Link Of Question : https://leetcode.com/problems/next-greater-element-ii/
503. Next Greater Element II
Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.
The next greater number of a number x is the first greater number to its traversing-order next in the array, 
which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.*/
//Solution : 

class Solution {
public:
vector nextGreaterElements(vector& arr) {

    if(!arr.size()) return {};

    int i,n=arr.size();
    
    stack<int>s;
    vector<int>ans(n,-1);
    
    for(int j=1;j<3;j++)
    {
        for(i = n-1 ;i>=0; i--)
        {
            while(!s.empty() && arr[i]>=s.top())
                s.pop();

            if(!s.empty())
                ans[i] = s.top();
            s.push(arr[i]);
        }
    }       
    return ans;
}
};

/*
Sample Input : nums = [1,2,1] 
Sample output : [2,-1,2] 
Time Complexity : O(N)
Space Complexity : O(N)
N = size of given array
*/
