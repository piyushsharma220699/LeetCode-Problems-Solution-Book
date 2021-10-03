class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i && nums[i]+nums[j]==target)
                {
                    res++;
                }
            }
        }
        return res;
    }
};


/* 
Sample input : nums = ["777","7","77","77"], target = "7777"
Sample output : 4
Time Complexity : O(n^2)
Space Complexity : O(1)
n = size of vector
*/
