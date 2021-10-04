// link to question : https://leetcode.com/problems/longest-consecutive-sequence/
/* Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.*/

// solution.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> sett(nums.begin(), nums.end());
        copy(nums.begin(), nums.end(), inserter(sett,sett.end()));
        int count=0,a=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(sett.find(nums[i]-1)==sett.end())
            {
                while(sett.find(nums[i])!=sett.end())
                {
                    nums[i]++;
                    count+=1;
                }
            }
            if(a<count)
                a = count;
            count=0;
        }
        return a;
    }
};

/* Sample Input 
Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
*/