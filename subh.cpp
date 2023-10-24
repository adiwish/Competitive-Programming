#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x==-1) continue;
            if(mp.find(x)!=mp.end()) mp[x]+=i;
            else mp[x]=i;
        }
        int maxm=0,in=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>maxm){
                maxm=it->second; in=it->first;
            }
        }
        cout<<in;
        cout<<endl;
    }
}