/*Link Of Question : https://leetcode.com/problems/jump-game/
55. Jump Game
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
Return true if you can reach the last index, or false otherwise.
*/

//Solution :

class Solution {
public:
bool canJump(vector& a) {

    int jumps = a[0]-1;
    for(int i=1;i<a.size();i++)
    {
        if(jumps<0) return false;
        jumps = max(jumps-1, a[i]-1);
    }
    return true;
}
};

/*
Sample Input: nums = [2,3,1,1,4]
Sample Output: true
Time Complexity : O(N)
Space Complexity : O(1)
N = size of given array
*/
