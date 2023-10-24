#include<bits/stdc++.h>
#include <iostream>
using namespace std;
// #define int long long
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
int solve(int i,int w,pair<int,int> a[],map<pair<int,int>,int>& dp){
    if(w<0) return INT_MIN;
    if(i<0||w==0) return 0;
    if(dp.find({i,w})!=dp.end()) return dp[{i,w}];
    int temp=a[i].second+solve(i-1,w-a[i].first,a,dp);
    temp=max(temp,solve(i-1,w,a,dp));
    dp[{i,w}]=temp;
    return temp;
}

void code(){
    int n,w; cin>>n>>w;
    pair<int,int> a[n];
    f(i,0,n) cin>>a[i].first>>a[i].second;
    map<pair<int,int>,int> dp;
    int ans=solve(n-1,w,a,dp);
    cout<<ans;

}

int32_t main(){
    adiwish

    // int t; cin>>t;
    // while(t--){
        code();
    //     cout<<endl;
    // }
}
