#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define veci vector<int> 
#define ll long long 
#define endl "\n"
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll mod(ll n){
    return n % 1000000007;
}
ll maxm(ll a[],ll i,ll j){
    if(i==j)
        return a[i];
    ll m=(i+j)/2;
    ll m1=(a,i,m);
    ll m2=(a,m+1,j);
    if(m1>m2)
        return m1;
    else 
        return m2;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        adiwish
    #define int long long

    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int max=maxm(a,0,n-1);
    cout<<max;


}