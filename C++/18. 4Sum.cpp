class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        
        if(nums.size()<4)
            return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int target_2=target-nums[j]-nums[i];
                
                int front=j+1;
                int back=nums.size()-1;
                
                while(front<back)
                {
                    int two_sum=nums[front]+nums[back];
                    
                    if(two_sum<target_2)
                        front++;
                    else if(two_sum>target_2)
                        back--;
                    
                    else
                    {
                        vector<int>v(4,0);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[front];
                        v[3]=nums[back];
                        
                        res.push_back(v);
                        
                        //processiong the number of duplicate of3
                        while(front<back && nums[front]==v[2])++front;
                        
                        while(front<back && nums[back]==v[3])--back;
                    }
                    
                }
                while(j+1<nums.size() && nums[j+1]==nums[j])++j;
                
            }
            while(i+1<nums.size() && nums[i+1]==nums[i])++i;
        }
        return res;
    }
};
