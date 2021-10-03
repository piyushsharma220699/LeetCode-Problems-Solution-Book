/*
 * @lc app=leetcode id=703 lang=cpp
 *
 * [703] Kth Largest Element in a Stream
 */

// @lc code=start
class KthLargest {
    int k_;
    vector<int> nums_;
public:
    KthLargest(int k, vector<int>& nums) {
        k_ = k;
        for (int num : nums) {
            add(num);
        }
    }

    int add(int val) {
        if (nums_.size() < k_) {
            insert(val);
            return nums_[0];
        }
        if (val > nums_[0]) {
            insert( val);
            nums_.erase(nums_.begin());
            return nums_[0];
        }
        
        return nums_[0];
    }
private:
    void insert(int val){
        if(nums_.empty()){
            nums_.push_back(val);
            return;
        }
        int l= 0, r = nums_.size()-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums_[mid]<val){
                l = mid+1;
            }else{
                r = mid;
            }
        }
        if(nums_[l]>val)nums_.insert(nums_.begin()+l, val);
        else nums_.insert(nums_.begin()+l+1, val);
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end

