#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define jack420 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define int long long

int mod(int n){
    return n % 1000000007;
}

bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

int isSquare(int n){
    int l=1,h=n;
    while(l<=h){
        int mid=(l+h)/2;
        if(mid*mid==n) return mid;
        if(mid*mid<n) l=mid+1;
        else h=mid-1;
    }
    return -1;
}

bool cmp(int a, int b){
    return a>b;
}

int power(int a,int b){
    int temp=1;
    while(b--)
        temp*=a;
    return temp;
}

int sumof(int n){
    int ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return ans;
}

void code(){
    int n,m; cin>>n>>m;
    int a[n+1];
    set<int> st;
    for(int i=1;i<=n;i++){ 
        cin>>a[i];
        if(a[i]>9) st.insert(i);
    }
    while(m--){
        int k; cin>>k;
        if(k==1){
            int l,r; cin>>l>>r;
            // l--;r--;
            auto adr=st.upper_bound(l-1);
            int ind=*adr;
            while(adr!=st.end()&&ind<=r){
                a[ind]=sumof(a[ind]);
                if(a[ind]<10) st.erase(ind);
                adr=st.upper_bound(ind);
                ind=*adr;
            }
        }   
        else{
            int x; cin>>x;
            cout<<a[x]<<"\n";
        }
    }
}

int32_t main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
        jack420

    int t;
    cin>>t;
    while(t--)
    {
        code();
        // cout<<endl;
    }
}