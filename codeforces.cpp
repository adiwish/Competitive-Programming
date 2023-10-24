#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define veci vector<int> 
#define ll long long 
#define endl "\n"
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

void code(){
    int n; cin>>n;
    string s; cin>>s;
    int zero=0,one=0;
    for(int i=0;i<n;i++)
        if(s[i]=='1')
            one++;
    zero=n-one;
    if(zero==one){
        for(int i=0;i<n;i++){
            if(zero>0)
                cout<<0;
            else
                cout<<1;
            zero--;
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            if(one>0)
                cout<<1;
            else
                cout<<0;
            one--;
        }
        return;
    }
    int maxm=max(zero,one);
    int minm=min(zero,one);
    int x;
    if(zero>one)
        x=0;
    else
        x=1;
    maxm-=minm;
    int sec=maxm/(2*minm);
    int rem=maxm%(2*minm);
    int temp=sec;
    for(int i=0;i<n;i++){
        if(temp>0){
            cout<<x;
            temp--;
        }
        else if(temp==0&&rem>0){
            cout<<x;
            temp=sec;
        }
        else{
            
        }
        
        
    }




}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        adiwish
    #define int long long

    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}