#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
int solve(string s, int i, int j)
{
    if(i>=j)
    return 0;
    if(t[i][j]!=-1)
    return t[i][j];
    int f=0;
    for(int k=i;k<=(i+j)/2;k++)
    {cout<<i<<j<<s[k]<<" ";
        if(s[k]!=s[j+i-k])
        {
            f=1;
            break;
        }}
        cout<<endl;
    if(f==0)
    return 0;
    int result=INT_MAX;
    for(int k=i;k<j;k++)
    {
        result=min(result, solve(s,i,k)+solve(s,k+1,j)+1);
    }
    return t[i][j]=result;
}
int  main()
{
    memset(t, -1, sizeof(t));
    string s;
    cin>>s;
    cout<<solve(s, 0, s.length()-1)<<endl;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<t[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}