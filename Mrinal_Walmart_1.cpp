#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void SieveOfEratosthenes(map<int,bool>& mp,int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            mp[p]=true;
}
int32_t main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,bool> mp;
    SieveOfEratosthenes(mp,100005);
    int left=-1,right=-1;
    for(int i=0;i<n;i++)
        if(mp[v[i]]){
            left=i; break;
        }
    for(int i=n-1;i>=0;i--)
        if(mp[v[i]]){
            right=i; break;
        }
    if(left==-1) cout<<-1;
    else cout<<right-left;
}