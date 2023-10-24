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

void code(){
    int n; cin>>n;
    vector<int> a(n);
    if(n==1){
        if(a[0]==0) cout<<0<<" "<<0;
        else cout<<1<<" "<<1;
        cout<<endl;
        ret;
    }

    f(i,0,n) cin>>a[i];
    int l[n]={0};
    int r[n]={0};
    f(i,0,n){
        if(a[i]==0)
            r[a[i]+1]+=n;
        else if(a[i]==n)
            continue;
        else if(a[i]==n-1)
            l[a[i]-1]+=1;
        else{
            l[a[i]-1]+=n-a[i];
            r[a[i]+1]+=n-a[i];
        }
    }
    sort(a.begin(),a.end());
    f(i,1,n) r[i]+=r[i-1];
    fr(i,n-2,0) l[i]+=l[i+1];
    f(i,0,n){
        int temp=n-(upper_bound(a.begin(),a.end(),i)-a.begin());
        cout<<temp<<" "<<temp+r[i]+l[i]<<endl;

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
        //cout<<endl;
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