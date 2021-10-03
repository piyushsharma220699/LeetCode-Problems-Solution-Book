/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        char inHand = 0;
        string ans ="";
        for (int i = 0; i < a.size() || i < b.size(); i++){
            int sum = 0;
            if (i < a.size() && a[a.size() - 1 - i] == '1'){
                sum += 1;
            }
            if (i < b.size() && b[b.size() - 1 - i] == '1'){
                sum += 1;
            }
            sum += inHand;
            if (sum ==0) {
                ans = '0'+ans;
                inHand = 0;
            }else if(sum==1){
                ans = '1'+ans;
                inHand = 0;
            }else if(sum==2){
                ans = '0'+ans;
                inHand = 1;
            }else if(sum==3){
                ans = '1'+ans;
                inHand = 1;
            }
        }
        if (inHand == 1){
            ans = '1'+ans;
        }
        return ans;
    }
};
// @lc code=end

