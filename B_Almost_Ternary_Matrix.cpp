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

    int n,m; cin>>n>>m;
    n=n/2; m=m/2;
    for(int i=1;i<=n;i++){
        vi v1;
        vi v2;
        for(int j=1;j<=m;j++){
            if(i%2==1){
                if(j%2==1){
                    v1.pb(1); v1.pb(0);
                    v2.pb(0); v2.pb(1);
                }
                else{
                    v1.pb(0); v1.pb(1);
                    v2.pb(1); v2.pb(0);
                }
            }
            else{
                if(j%2==1){
                    v1.pb(0); v1.pb(1);
                    v2.pb(1); v2.pb(0);
                }
                else{
                    v1.pb(1); v1.pb(0);
                    v2.pb(0); v2.pb(1);
                }
            }
        }
        f(k,0,sz(v1)) cout<<v1[k]<<" ";
        cout<<endl;
        f(k,0,sz(v2)) cout<<v2[k]<<" ";
        cout<<endl;
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