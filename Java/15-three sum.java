class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
      
       vector<vector<int>> output;
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); ++i) {
    
    if (i != 0 && nums[i] == nums[i - 1]) continue;
    int j = i + 1;
    int k = nums.size() - 1;
    while (j < k) {
      if (nums[i] + nums[j] + nums[k] == 0) {
        output.push_back({nums[i], nums[j], nums[k]});
        ++j;
             while (j < k && nums[j] == nums[j-1]) ++j;
          while(j<k && nums[k]==nums[k-1]) k--;
      } else if (nums[i] + nums[j] + nums[k] < 0) {
        ++j;
      } else {
        --k;
      }
    }
  }
  return output;
        
    }
};


/* Examples
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
*/