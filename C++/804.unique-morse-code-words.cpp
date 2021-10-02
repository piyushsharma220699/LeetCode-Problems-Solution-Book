/*
 * @lc app=leetcode id=804 lang=cpp
 *
 * [804] Unique Morse Code Words
 */

// @lc code=start
class Solution {
public:
    vector <string> values = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>codedWords;
        for (auto word : words){
            string code = encode(word);
            if (find(codedWords.begin(),codedWords.end(),code)==codedWords.end()){
                codedWords.push_back(code);
            }
        }
        return codedWords.size();
    }
    string encode(string word){
        string ret = "";
        for(auto c : word){
            ret += values[c-'a'];
        }
        return ret;
    }
};
// @lc code=end

