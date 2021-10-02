//Leetcode-410 :Given an array nums which consists of non-negative integers and an integer m, you can split the array into m non-empty continuous subarrays.
//Write an algorithm to minimize the largest sum among these m subarrays.


//Solution :-
class Solution {
    public int splitArray(int[] nums, int m) {
        // Max ans = split 1 
        //Min ans = split to the length
        int start =0;
        int end =0;
        for(int i =0;i<nums.length;i++){
            start = Math.max(start,nums[i]);
            end +=nums[i];
        }

        //10,32 
        while(start<end){
            int mid = start + (end - start)/2;
            int sum =0;
            int pices =1;
            for(int num : nums){
                if(sum+num>mid){
                    sum= num;
                    pices++;
                }
                else{
                    sum+=num;
                }
            }
            if(pices>m){
                start=mid+1;
            }else
                end= mid;
        }
        return end;
    }
}
