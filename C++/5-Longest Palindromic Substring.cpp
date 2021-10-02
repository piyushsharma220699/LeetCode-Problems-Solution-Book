class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0)
            return 0;
        
        int max_len=0,l=0,r=0;
        
        for(int k=1;k<n;k++){
            int i=k-1,j=k+1;
            while(i>=0 && j<n && s[i]==s[j]){
                i--;
                j++;
            }
            i++;
            j--;
            if(j-i+1>max_len){
                l=i;
                r=j;
                max_len=j-i+1;
            }
            i=k-1;
            j=k;
            while(i>=0 && j<n && s[i]==s[j]){
                i--;
                j++;
            }
            i++;
            j--;
            if(j-i+1>max_len){
                l=i;
                r=j;
                max_len=j-i+1;
            }
        }
        string ans="";
        for(int i=l;i<=r;i++){
            ans+=s[i];
        }
        return ans;
    }
};
