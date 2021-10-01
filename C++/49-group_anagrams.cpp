// Problem Link : https://leetcode.com/problems/group-anagrams/

// 49. Group Anagrams

// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
// typically using all the original letters exactly once.

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string tmp;
        unordered_map<string, vector<string>>um;
        // map every string to there sorted version
        for(auto s : strs){
            tmp = s;
            sort(tmp.begin(), tmp.end());
            um[tmp].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto it : um){
            vector<string>a;
            for(auto s : it.second){
                a.push_back(s);
            }
            ans.push_back(a);
        }
        return ans;
    }
};