/*Link Of Question : https://leetcode.com/problems/missing-number/
268. Missing Number
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.*/
//Solution : 

class Solution {
public:
int missingNumber(vector& a) {

    int i,n=a.size();
    int j=n;
    
    for(i=0;i<n;i++)
    {
        j ^= i;
        j ^= a[i];         
    }
    return j;
}
};

/*
Sample Input : nums = [3,0,1]
Sample output : 2
Time Complexity : O(1)
Space Complexity : O(1)
N = size of given array
*/
