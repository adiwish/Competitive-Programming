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
    sg s; cin>>s;
    ll ans=0;
    if(n%2==1){ 
        ans++;
        ll x=n/2;
        f(i,1,n){
            if(x+i>=n) break;
            if(s[x+i]==s[x-i]&&s[x+i]==s[x]) ans+=2;
            else break;
        }
    }
    else{ 
        ans+=2;
        ll x=n/2;
        f(i,1,n){
            if(x+i>=n) break;
            if(s[x+i]==s[x-i-1]&&s[x+i]==s[x]) ans+=2;
            else break;
        }
    }
    cout<<ans;

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