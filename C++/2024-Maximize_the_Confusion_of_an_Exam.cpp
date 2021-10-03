class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.length();
        int temp=0,l=0,res=0;
        for(int i=0;i<n;i++) 
        {
            if(answerKey[i]=='T')
            {
                temp++;
            }

            while(temp>k) 
            {
                if(answerKey[l]=='T')
                {
                    temp--;
                }
                l++;
            }
            res=max(res,i-l+1);
        }
        
        temp=0,l=0;
        
        for(int i=0;i<n;i++) 
        {
            if(answerKey[i]=='F')
            {
                temp++;
            }

            while(temp>k) 
            {
                if(answerKey[l]=='F')
                {
                    temp--;
                }
                l++;
            }
            res=max(res,i-l+1);
        } 
    return res;
    }
};


/* 
Sample input : answerKey = "TTFF", k = 2
Sample output : 4
Time Complexity : O(n)
Space Complexity : O(n)
n = length of input string
*/
