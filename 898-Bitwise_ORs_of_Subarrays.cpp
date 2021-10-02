/*
Question  link :https://leetcode.com/problems/bitwise-ors-of-subarrays/
898-We have an array arr of non-negative integers.

For every (contiguous) subarray sub = [arr[i], arr[i + 1], ..., arr[j]] (with i <= j), we take the bitwise OR of all the elements in sub, obtaining a result arr[i] | arr[i + 1] | ... | arr[j].

Return the number of possible results. Results that occur more than once are only counted once in the final answer
*/
class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> ans, prev;
        for(int i=0;i<arr.size();i++){
            unordered_set<int> next;
            for(auto x: prev) next.insert(arr[i] | x);
            next.insert(arr[i]);
            for(auto x: next) ans.insert(x);
            prev=next;
        }
        return ans.size();
    }
};
