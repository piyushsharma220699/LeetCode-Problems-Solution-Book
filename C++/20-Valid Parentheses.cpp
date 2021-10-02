class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                if(stk.empty()||stk.top()!='(')
                    return 0;
                else
                    stk.pop();
            }
            else if(s[i]=='}'){
                if(stk.empty()||stk.top()!='{')
                    return 0;
                else
                    stk.pop();
            }
            else if(s[i]==']'){
                if(stk.empty()||stk.top()!='[')
                    return 0;
                else
                    stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
        if(stk.empty())
            return 1;
        return 0;
    }
};
