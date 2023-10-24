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
    ll a[n],ax[n],b[n],bx[n];
    f(i,0,n){
        cin>>a[i]; ax[i]=a[i];
    }
    f(i,0,n){
        cin>>b[i]; bx[i]=b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    // f(i,0,n){
    //     cout<<a[i]<<" ";
    // }
    vector<pair<int,int>> v;
    f(i,0,n){
        bool flag=true;
        f(j,0,n){
            if(a[i]==ax[j]&&b[i]==bx[j]){
                swap(ax[i],ax[j]);
                swap(bx[i],bx[j]);
                ax[i]=0; bx[i]=0; flag=false;
                if(i!=j)
                    v.push_back({i,j});
                break;
            }
        }
        if(flag){
            cout<<-1<<endl; ret;
        }
    }
    cout<<v.size()<<endl;
    f(i,0,v.size()) cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
    

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
        //cout<<endl;
    }
}