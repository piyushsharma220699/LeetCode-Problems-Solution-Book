/* 
Link of the question: https://leetcode.com/submissions/detail/388400654/

20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
 */



bool isValid(char * s){
    if(strlen(s)==1)
        return false;

    int k=-1;
    int num(char);
    int check(char,char);
    char b[strlen(s)];


        for(int i=0;i<strlen(s);i++)
        {
            b[++k]=s[i];  //storing brackets in sequence 

            if(num(b[k])==1)  //if the curr bracket is opening bracket 
                continue;
            else

                if(k>0&&check(b[k-1],b[k])) //if curr bracket is closing then checking for its opening bracket
                {
		    k-=2;
                    continue;
                }
            else
                return false;
            }
    if(k==-1)  //it means we checked for all brackets
        return true;
    else
        return false;

}

int num(char c)
{
    if(c=='('||c=='['||c=='{')
        return 1;
    else
        return 0;
}
int check(char a,char b)
{
    if((a=='('&&b==')')||(a=='['&&b==']')||(a=='{'&&b=='}'))
        return 1;
    else
        return 0;
}

/*
Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true

Time Complexity: O(N)
Space Complexity: O(N)

where N is the length of the string
*/
