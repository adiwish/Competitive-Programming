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
ll mod(ll x){
    if(x<0)
        return -1*x;
    else
        return x;
}
deque<ll> binary(ll n,ll l){
    deque<ll> a;
    //cout<<n<<endl;
    while(n!=0){
        a.push_front(n%2);
        //cout<<n%2;
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
ll dec(ll a[],ll l){
    int ans=0,j=0;
    for(int i=l-1;i>=0;i--){
        ans=ans+pow(2,j);
        j++;
    }
    return ans;
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
    while(t--)
    {
        int n,l; cin>>n>>l;
        int a1[l]={0},a0[l]={0};
        for(int i=0;i<n;i++){
            int temp; cin>>temp; cout<<temp<<endl;
            deque<int> a=binary(temp,l);
            for(int j=0;j<l;j++){
                cout<<a[j];
                if(a[j]==0)
                    a0[j]++;
                else
                    a1[j]++;
            }
            cout<<endl;

        }
        int ans[l];
        for(int i=0;i<l;i++){
            if(a1[i]>a0[0])
                ans[i]=1;
            else
                ans[i]=0;
        }
        for(int i=0;i<l;i++)
            cout<<ans[i];
        int c=dec(ans,l);
        //cout<<c;
        


    }
}