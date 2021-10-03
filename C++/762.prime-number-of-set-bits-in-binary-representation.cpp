/*
 * @lc app=leetcode id=762 lang=cpp
 *
 * [762] Prime Number of Set Bits in Binary Representation
 */

// @lc code=start
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for (int i=left; i <= right; i++){
            if (isPrime(countSetBit(i))) ans++;
        }
        return ans;
    }
    int countSetBit(int n){
        int s = 0;
        while(n){
            s+= n&1;
            n>>=1;
        }
        return s;
    }
    bool isPrime(int n){
        if (n==1) return false;
        for (int i=2; i<n;i++){
            if (n%i == 0) return false;
        }
        return true;
    }
};
// @lc code=end

