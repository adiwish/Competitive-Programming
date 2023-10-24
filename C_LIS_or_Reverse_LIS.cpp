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
    mi mp; 
    f(i,0,n){
        ll x; cin>>x;
        mp[x]++;
    }
    ll l=mp.size();
    if(l==1){
        cout<<1; ret;
    }
    ll x1=0,x2=0,i=l;
    
    
    for(auto it=mp.begin();it!=mp.end();it++){
        //cout<<it->first<<endl;
        if(l%2==1){
            if(i<=l/2&&it->second>1)
                x1++;
            else if(i!=l&&it->second>1)
                x2++;
        }
        else{
            //cout<<"yes"<<endl;
            if(i<=(l/2)&&it->second>1){
                //cout<<"yes";
                 x1++;
            }
               
            
            else if(i!=l&&it->second>1)
                x2++;
        }
        i--;
    }
    // cout<<mp[1]<<endl;
    // cout<<l<<" "<<x1<<" "<<x2<<endl;
    ll temp;
    if(l%2==1) temp=(l/2)+1;
    else temp=(l/2);
    cout<<min((l/2)+1+x2,temp+x1);

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