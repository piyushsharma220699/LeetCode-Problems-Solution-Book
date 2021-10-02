/*
Question Link : https://leetcode.com/problems/sort-colors/

75. Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent,
with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

*/

// Solution (2 solutions)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*int z=0,t=0,o=0;                      // Solution 1
        for(int i=0;i<nums.size();i++){         // count number of 0s,1s and 2s
            if(nums[i]==0){
                z++;
            }
            else if(nums[i]==1){
                o++;
            }
            else{
                t++;
            }
        }
        for(int i=0;i<z;i++){                   // rewrite them in the array
            nums[i]=0;
        }
        for(int i=z;i<z+o;i++){
            nums[i]=1;
        }
        for(int i=z+o;i<z+o+t;i++){
            nums[i]=2;
        }*/
        
        int i=0,j=0,k=nums.size()-1;            // Solution 2
        // we move all 0s to starting of vector and all 2s to end of vector

        while(j<=k){
            if(nums[j]==0){                     // if 0 found at j, move it to 'i'th position
                swap(nums[i],nums[j]);
                i++;
                j++;

                // or swap(arr[i++],arr[j++]);
            }
            else if(nums[j]==1){                // if 1 found at j, move forward
                j++;
            }
            else{                               // if 2 found at j, move it to 'k'th position
                swap(nums[j],nums[k--]);
            }
        }
    }
};

/*
Sample Input : nums = [2,0,2,1,1,0]
Sample Output : [0,0,1,1,2,2]
Time Complexity : O(N)
Space Complexity : O(1)
N = size of given vector
*/