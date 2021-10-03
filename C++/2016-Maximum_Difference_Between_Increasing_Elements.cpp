class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size(); 
        int left=INT_MAX,res=0,right ; 
        for(int i=0;i<n;i++){
            left=min(left,nums[i]);
            right=nums[i]; 
            res=max(res,right-left); 
        }
        if(res==0)
        {
            return -1;
        }
        return res;
    }
};


/* 
Sample input : [7,1,5,4]
Sample output : 4
Time Complexity : O(n)
Space Complexity : O(n)
n = size of vector
*/
