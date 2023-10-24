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

void code(){
    int m; cin>>m;
    int a[2][m];
    f(i,0,2)
        f(j,0,m) cin>>a[i][j];
    a[0][0]=0; a[1][m-1]=0;
    if(m==1){
        cout<<0; ret;
    }
    if(m==2){
        cout<<min(a[0][1],a[1][0]); ret;
    }
    fr(i,m-2,0) a[0][i]+=a[0][i+1];
    f(i,1,m) a[1][i]+=a[1][i-1];

    // f(i,0,2){
    //     f(j,0,m) cout<<a[i][j]<<" ";
    //     cout<<endl;
    // }

    int ans=min(a[0][0],a[1][m-1]);
    int i=m-1,j=m-3;
    while(j>=0){
        ans=min(ans,max(a[0][i],a[1][j]));
        i--; j--;
    }
    cout<<ans; ret;
    

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