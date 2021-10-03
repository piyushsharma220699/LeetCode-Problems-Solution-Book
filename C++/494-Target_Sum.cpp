/*
Link to question : https://leetcode.com/problems/target-sum/
494. Target Sum
Problem :
Given an integer array nums and an integer target.
You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.
Return the number of different expressions that you can build, which evaluates to target.
For example, 
if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".

Approach :
This problem can be best solved by using Dynamic Programming (DP). 
The given problem is a variation of a standard DP question - count the number of subsets of a given difference. 
Here, the given target sum is equivalent to the difference value in that standard problem. 
We basically have to find a sum using DP having value : (targetSum + totalSum)/2
Note : The numbers with 0 values have to be taken care of explicitly. They would have the same effect when used with '+' or '-'.

Solution :
*/

class Solution {
public:
    int countSubset(vector<int> nums, int sum, int n){
        //2-D DP with number of elements (n) and sum as varying indices
        int dp[n+1][sum+1];
        //No combination can make any sum when n = 0 
        for(int i=0;i<=sum;i++)
            dp[0][i]= 0;
        //sum = 0 can be found in every case and is independent of n's value
        for(int i=0;i<=n;i++)
            dp[i][0]= 1;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                //Special case for 0 values
                if(nums[i-1]==0)
                    dp[i][j]= dp[i-1][j];
                else if(nums[i-1]<=j)
                    dp[i][j]= dp[i-1][j-nums[i-1]] + dp[i-1][j];
                else
                    dp[i][j]= dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum=0, count=0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
            //count the total number of 0s
            if(nums[i]==0)
                count++;
        }
        if(target>totalSum)
            return 0;
        if((target+totalSum)%2!=0)
            return 0;
        int res = countSubset(nums, (target+totalSum)/2, nums.size());
        //Special condition for including 0 values
        return pow(2, count)*res;
    }
};

/*
Input : nums = [1,1,1,1,1], target = 3
Output : 5

Input : nums = [1], target = 1
Output : 1

Time Complexity : O(sum*n)
Space Complexity : O(sum*n)
where, sum is the calculated sum and n is the size of given array
*/