#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long 
#define endl "\n"
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define timer_start \
    clock_t start = clock();
#define timer_end \
    clock_t end = clock();\
        cerr<<endl<<endl<<"Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";

ll mod(ll n){
    return n % 1000000007;
}

void print(ll a[],ll n,ll i,vector<int> & ans){
    // if(i==n-1){
    //     ans[i]=a[i];
    //     for(int j=0;j<n;j++)
    //         if(ans[j]!=-1)
    //             cout<<ans[j]<<" ";
    //     cout<<endl;
    //     ans[i]=-1;
    //     for(int j=0;j<n;j++)
    //         if(ans[j]!=-1)
    //             cout<<ans[j]<<" ";
    //     cout<<endl;
    //     return ;
    // }
    if(i==n)
    {
        for(auto e : ans)
        cout<<e<< " ";
        cout<<endl;
    }
        ans.push_back(a[i]);
        print(a,n,i+1,ans);
        ans.pop_back();
        
        print(a,n,i+1,ans);
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        adiwish
    #define int long long
    timer_start


    cout<<"k";
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> ans;
    int i=0;
    print(a,n,i,ans);

    //Completed





    timer_end
}