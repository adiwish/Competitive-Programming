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
bool isprime(int n){
    if(n==1) ret false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) ret false;
    ret true;
}
int isSquare(int n){
    int l=1,h=n;
    while(l<=h){
        int mid=(l+h)/2;
        if(mid*mid==n) return mid;
    if(mid*mid<n) l=mid+1;
        else h=mid-1;
    }
    return -1;
    }
bool cmp(int a, int b){
    return a>b;
}
int power(int a,int b){
    int temp=1;
    while(b--)
        temp*=a;
    return temp;
}
int solve(int i,int a[],int k,int dp[]){
    if(i<0) return INT_MAX;
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int ans=INT_MAX;
    for(int j=1;j<=k;j++){
        if((i-j)<0) bk;
        int temp=solve(i-j,a,k,dp);
        temp=abs(a[i]-a[i-j])+temp;
        // cout<<i<<" "<<j<<" "<<temp<<endl;

        ans=min(ans,temp);
    }
    dp[i]=ans;
    return ans;
}

void code(){
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int dp[n];
    for(int i=0;i<n;i++) dp[i]=-1;
    cout<<solve(n-1,a,k,dp)<<endl;
    // for(int i=0;i<n;i++) cout<<dp[i]<<" ";
    // cout<<endl;
    

}

int32_t main(){
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    //#endif
    adiwish

    // int t; cin>>t;
    // while(t--){
        code();
    //     cout<<endl;
    // }
}
