#include <bits/stdc++.h>
#define int long long
using namespace std;
int solve(int n,int dp[])
{
    if(n+1==1)
    {
        return 1;
    }
    if(n+1<=0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans=solve(n-1,dp)+solve(n-2,dp)+solve(n-3,dp)+solve(n-4,dp)+solve(n-5,dp)+solve(n-6,dp);
    dp[n]=ans%1000000007;
    return dp[n];
}
 
int32_t main() {
   int n;
   cin>>n;
   int dp[1000005];
   memset(dp,-1,sizeof(dp));
   cout<<solve(n,dp);
}