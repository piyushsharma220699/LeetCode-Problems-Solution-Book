/*
 * @lc app=leetcode id=811 lang=cpp
 *
 * [811] Subdomain Visit Count
 */

// @lc code=start
class Solution {
public:
    map<string,int> m;
    bool find(string s){
        for(auto it : m){
            if (s.compare(it.first)==0) return true;
        }
        return false;
    }
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> ret;
        for (auto s: cpdomains){
            int num = 0;
            int i =0;
            while(s[i]!=' '){
                num = num*10 + (int)s[i] + 1 - '1';
                i++;
            }
            i++;
            vector<string> domains;
            domains.push_back(s.substr(i));
            while (s[i]){
                if (s[i]=='.'){
                    domains.push_back(s.substr(i+1));
                }
                i++;
            }
            for (auto j : domains) {
                if (!find(j)){
                    m[j]=num;
                } else {
                    m[j]+=num;
                }
            }
        }
        for (auto it: m){
            ret.push_back(to_string(it.second)+' '+it.first);
        }
        return ret;
    }
};
// @lc code=end

