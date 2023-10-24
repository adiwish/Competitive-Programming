#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define sg string
#define vi vector<int>
#define vc vector<char>
#define mi unordered_map<int,int> 
#define mc unordered_map<char,char>
#define mic unordered_map<int,char>
#define mci unordered_map<char,int>
#define pb push_back
#define pf push_front
#define sz(a) a.size()
// for loop
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,a,b) for(int i=a;i>=b;i--) // reverse forloop

#define ret return
#define bk break
#define endl "\n"
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int mod(int n){
    return n % 1000000007;
}


int solve(int i,int k,int dp[]){
    if(i<=0) return 0;
    if(i<k){ 
        dp[i]=1;
        return 1;
    }
    if(i==k){
        dp[i]=2;
        return 2;
    }
    if(dp[i]!=-1) return dp[i];
    int ans=mod(solve(i-1,k,dp))+mod(solve(i-k,k,dp));
    // ans=mod(ans);
    dp[i]=ans;
    return ans;
}

int32_t main(){
    adiwish
    int t,k; cin>>t>>k;
    pair<int,int> test[t];
    int maxm=-1;
    f(i,0,t){
        int x,y; cin>>x>>y;
        test[i]={x,y};
        maxm=max(maxm,y);
    }
    // cout<<maxm<<endl;
    int dp[maxm+1];
    fe(i,0,maxm) dp[i]=-1;
    dp[0]=0;
    int temp=solve(maxm,k,dp);

    // fe(i,0,maxm) cout<<dp[i]<<endl;
    // cout<<endl;

    fe(i,1,maxm){
        if(dp[i]==-1) dp[i]=1;
        dp[i]+=dp[i-1];
        // dp[i]=mod(dp[i]);
    }
    // cout<<dp[93494]<<" "<<dp[58867-1];
    f(i,0,t){
        int x=test[i].first,y=test[i].second;
        int ans=dp[y]-dp[x-1];
        ans=mod(ans);
        cout<<ans<<endl;
    }

}