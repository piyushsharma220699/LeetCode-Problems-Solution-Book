/*

Problem 39. Combination Sum

Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
*/

class Solution {
public:
    vector<vector<int>>ans;
    
    void findcombo(int ind,int target,vector<int>&arr,vector<int>&ds)
    {
        if(ind==arr.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        
        if(arr[ind]<=target)
        {
            ds.push_back(arr[ind]);
            findcombo(ind,target-arr[ind],arr,ds);
            ds.pop_back();
        }
        findcombo(ind+1,target,arr,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
         
        vector<int>ds;
        findcombo(0,target,arr,ds);
        return ans;
    }
};

/*

Sample Input: candidates = [2,3,6,7], target = 7
Sample Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

*/
