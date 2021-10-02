/*
 * @lc app=leetcode id=748 lang=cpp
 *
 * [748] Shortest Completing Word
 */

// @lc code=start
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        map<char, int> charCount;
        
        for(char c : licensePlate){
            if(!isalpha(c)) continue;
            c = tolower(c);
            if(charCount.find(c)==charCount.end()){
                charCount[c]=1; 
            }else{
                charCount[c]+=1;
            }
        }
        
        // for(map<char, int>::iterator it = charCount.begin(); it!=charCount.end(); it++){
        //     cout << it->first << " " << it->second << endl;
        // }
        
        string ans = "";
        for(string word : words){
            map<char, int> tmp = charCount;
            for(char c : word){
                if(tmp.find(c)!=tmp.end()){
                    tmp[c]--;
                    if(tmp[c]==0) tmp.erase(c);
                }
            }
            // cout << word << " " << tmp.size() << endl;
            if(tmp.size()==0){
                if(ans==""){
                    ans = word;
                }else if(word.size() < ans.size()){
                    ans = word;
                }
            }
        }
        
        return ans;
    }
};