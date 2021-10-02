/*
Problem 40. Combination Sum II

Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

*/

class Solution {
public:
    vector<vector<int>>ans;
    
    void find(int ind,int t,vector<int>& arr,vector<int>&ds)
    {
        if(t==0)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1])continue;
            if(arr[i]>t)break;
            ds.push_back(arr[i]);
            find(i+1,t-arr[i],arr,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<int>ds;
        find(0,target,arr,ds);
        return ans;
    }
};


/*
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
*/
