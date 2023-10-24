#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define sg string
#define vi vector<ll>
#define vc vector<char>
#define mi unordered_map<ll,ll> 
#define mc unordered_map<char,char>
#define mic unordered_map<ll,char>
#define mci unordered_map<char,ll>
// for loop
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fe(i,a,b) for(ll i=a;i<=b;i++)
#define fr(i,a,b) for(ll i=a;i>=b;i--) // reverse forloop

#define ret return
#define bk break
#define endl "\n"
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}
ll mod(ll x){
    if(x<0) return -1*x;
    else return x;
}
bool cmp(ll a, ll b){
    return a>b;
}

void code(){
    ll n; cin>>n;
    ll a[n];
    f(i,0,n) cin>>a[i];
    ll m; cin>>m;
    ll b[m];
    f(i,0,m) cin>>b[i];
    ll ans=0;
    f(i,0,m) ans=(ans+b[i])%n;
    cout<<a[ans];

}

int main(){
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    //#endif
        adiwish

    ll t; cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}