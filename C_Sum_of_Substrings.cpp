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
    ll n,q; cin>>n>>q;
    map<int,int> mp;
    ll sum=0;
    fe(i,1,n){
        ll x; cin>>x;
        mp[i]=x;
        sum+=x;
    }
    while(q--){
        bool flag=false;
        ll lv;
        ll t; cin>>t;
        ll i,v;
        if(t==1){
            cin>>i>>v;
        }
        else cin>>v;
            
            
        if(t==1){
            if(mp.find(i)!=mp.end()){
                sum=sum-mp[i]+v;
                mp[i]=v;
            }
            else{
                sum=sum-lv+v;
                mp[i]=v;
            }
        }
        else{
            sum=v*n;
            flag=true;
            lv=v;
            mp.clear();
        }
        cout<<sum<<endl;
    }

}

int main(){
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    //#endif
        adiwish

    // ll t; cin>>t;
    // while(t--){
        code();
        //cout<<endl;
    //}
}
/*

1. Wrong Ans?
    Did u read the Statement properly?
    Did u miss any constraints?
    Did u miss any corner case?
    Are u sure about your Solution?

2. No Idea?
    Try Greedy..
    Try DP...
    First Try Recursive DP..
    Then Try Iterative DP..
    If memory exceeds, then try to reduce it..
    If not possible then, try to solve it using following way..
    Try to solve it using Permutation ans Combination..
    Try to find Sequence..
    Try to Solve it using Algebra..
*/