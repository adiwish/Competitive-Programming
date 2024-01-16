#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int32_t main(){
    adiwish
    
    string s; cin>>s;
    map<int,int> mp;
    int n=s.size();
    deque<int> q;
    for(int i=n-1;i>=0;i--){
        q.push_front(mp[s[i]]);
        mp[s[i]]++;
    }
    for(int i=0;i<n;i++) cout<<q[i]<<" ";
}