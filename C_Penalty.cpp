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
    sg s; cin>>s;
    int abuf[10]={0};
    int bbuf[10]={0};
    bbuf[9]=1;
    fr(i,8,0){
        if(i%2==0){
            abuf[i]=abuf[i+1]+1;
            bbuf[i]=bbuf[i+1];
        }
        else{
            bbuf[i]=bbuf[i+1]+1;
            abuf[i]=abuf[i+1];
        }
    }
    // f(i,0,10) cout<<abuf[i]<<" ";
    // cout<<endl;
    // f(i,0,10) cout<<bbuf[i]<<" ";
    // cout<<endl;

    int afr=0,bfr=0;
    int aq=0,bq=0;
    f(i,0,10){
        if(i==9){
            cout<<10; ret;
        }
        if(i%2==0&&s[i]=='?') aq++;
        if(i%2==1&&s[i]=='?') bq++;
        if(i%2==0&&s[i]=='1') afr++;
        if(i%2==1&&s[i]=='1') bfr++;
        if((aq+afr)>(bfr+bbuf[i+1])||(bfr+bq)>(afr+abuf[i+1])){
            cout<<i+1; ret;
        }
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