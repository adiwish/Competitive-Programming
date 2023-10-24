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
deque<ll> binary(ll n,ll l){
    deque<ll> a;
    //cout<<n<<endl;
    while(n!=0){
        a.push_front(n%2);
        n=n/2;
    }
    for(ll i=a.size();i<l;i++)
        a.push_front(0);
    // for(int i=0;i<l;i++)
    //         //if(temp[i]!=0)
    //             cout<<a[i]<<" ";
    //     cout<<endl;
    return a;
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
    int s=pow(2,n);
    s--;
    for(int i=1;i<=s;i++){
       deque<int> temp=binary(i,n);
        for(int i=0;i<n;i++)
            if(temp[i]!=0)
                cout<<a[i]<<" ";
        cout<<endl;
    }
    //Completed
}