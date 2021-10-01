#include <bits/stdc++.h>
using namespace std;

long long int anybase(int n, int b)
{

    long long int ans = 0;
    while (n != 0)
    {
        ans = ans + n % b;
        n /= b;
    }

    return ans;
}
long long int minbase(long long int n, long long int l, long long int r)
{
    long long int base = 0,k;
    long long int sum=10e9;
    for (int i = r; i >= 2; i--)
    {
        if(r>=n && r%i==0){
            return i;
        }
        k = anybase(n, i);
        if (k <= sum)
        {
            sum = k;
            base = i;
        }
    }
    return base;
}

int main()
{
    int Q;
    cin >> Q;
    while (Q--)
    {
        long long int n, l, r, answer = 10e9 + 7, k, j = 0;
        cin >> n >> r;
        cout<<minbase(n,2,r)<<endl;
    }
    return 0;
}