#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define sg string
#define vi vector<int>
#define vc vector<char>
#define mi unordered_map<int,int> 
#define mc unordered_map<char,char>
#define mic unordered_map<int,char>
#define mci unordered_map<char,int>
#define pb push_back
#define pf push_front
#define sz(a) a.size()
// for loop
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,a,b) for(int i=a;i>=b;i--) // reverse forloop

#define ret return
#define bk break
#define endl "\n"
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int mod(int n){
    return n % 1000000007;
}
bool isprime(int n){
    if(n==1) ret false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) ret false;
    ret true;
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

void code(){
    int n; cin>>n;
    int a[n];
    f(i,0,n) cin>>a[i];
    int sum=0;
    if(n%2==1){
        for(int i=1;i<n;i+=2){
            int maxm=max(a[i-1],a[i+1]);
            if(maxm>=a[i])
                sum+=(maxm-a[i]+1);
        }
        cout<<sum; ret;
    }
    else{
        vi v1,v2;
        for(int i=1;i<n-1;i+=2){
            int maxm=max(a[i-1],a[i+1]);
            if(maxm>=a[i]){
                int x=(maxm-a[i]+1);
                v1.pb(x);
            }
            else v1.pb(0);
        }
        for(int i=2;i<n;i+=2){
            int maxm=max(a[i-1],a[i+1]);
            if(maxm>=a[i]){
                int x=(maxm-a[i]+1);
                v2.pb(x);
            }
            else v2.pb(0);
        }
        f(i,0,sz(v1)) cout<<v1[i]<<" ";
        cout<<endl;
        f(i,0,sz(v2)) cout<<v2[i]<<" ";
        cout<<endl;
        int temp=n;
        n=v1.size();
        f(i,1,n)
            v1[i]+=v1[i-1];
        fr(i,n-2,0)
            v2[i]+=v2[i+1];
        int minm=LONG_MAX;
        f(i,0,n-1){
            if((v1[i]+v2[i+1])<minm) minm=(v1[i]+v2[i+1]);
        }
        if(minm>v1[n-1]) minm=v1[n-1];
        if(minm>v2[0]) minm=v2[0];
        cout<<minm;
    }
}

int32_t main(){
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    //#endif
    adiwish

    int t; cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}
/*

1. Wrong Ans?
    Did u read the Statement properly?
    Did u miss any constraints?
    Did u miss any corner case?
    Are u sure about your Solution?

2. No Idea?
    Try Greedy..
    Try DP...
    First Try Recursive DP..
    Then Try Iterative DP..
    If memory exceeds, then try to reduce it..
    If not possible then, try to solve it using following way..
    Try to solve it using Permutation ans Combination..
    Try to find Sequence..
    Try to Solve it using Algebra..
*/