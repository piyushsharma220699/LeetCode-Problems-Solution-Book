/* Game with String 

Easy Accuracy: 70.99% Submissions: 5934 Points: 2
Given a string s of lowercase alphabets and a number k, the task is to print the minimum value of the string after removal of ‘k’ characters. The
value of a string is defined as the sum of squares of the count of each distinct character.
 

Example 1:

Input: s = abccc, k = 1
Output: 6
Explaination:
We remove c to get the value as 12 + 12 + 22
 

Example 2:

Input: s = aabcbcbcabcc, k = 3
Output: 27
Explaination: We remove two 'c' and one 'b'. 
Now we get the value as 32 + 32 + 32.

Your Task:
You do not need to read input or print anything. Your task is to complete the function minValue() which takes s and k as input parameters and returns 
the minimum possible required value.


Expected Time Complexity: O(N*logN)  where N is the length of string
Expected Auxiliary Space: O(N)

Constraints:
1 = k = |string length| = 100 */

#include<bits/stdc++.h>
using namespace std;
int main()
 {
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
    cout.tie(NULL);
	int t,n,k,i,j;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    cin>>k;
	    priority_queue<int>q;
	    int arr[26]={0};
	    for(i=0;i<s.length();i++)
	        arr[s[i]-'a']++;
	     
	     for(i=0;i<26;i++)
	     {
	         q.push(arr[i]);
	     }
	     
	     while(k--)
	     {
	         int x=q.top();
	         x--;
	         q.pop();
	         q.push(x);
	     }
	     int sum=0;
	     while(!q.empty())
	     {
	         sum+=q.top()*q.top();
	         q.pop();
	     }
	     cout<<sum<<"\n";
	}
	return 0;
}
