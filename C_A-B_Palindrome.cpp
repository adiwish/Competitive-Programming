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
    int a,b; cin>>a>>b;
    int n=a+b;
    sg s; cin>>s;
    if(a%2==1&&b%2==1){
        cout<<-1; ret;
    }
    if(n%2==0&&(a%2==1||b%2==1)){
        cout<<-1; ret;
    }
    if(n%2==1&&(a%2==0&&b%2==0)){
        cout<<-1; ret;
    }
    f(i,0,n){
        if((s[i]=='1'&&s[n-1-i]=='0')||(s[i]=='0'&&s[n-1-i]=='1')){
            cout<<-1; ret;
        }
        if(s[i]!='?')
            s[n-1-i]=s[i];
    }
    int one=0,zero=0;
    f(i,0,n){
        if(s[i]=='0') zero++;
        if(s[i]=='1') one++; 
    }
    if(zero>a||one>b){
        cout<<-1; ret;
    }
    a-=zero; b-=one;
    if(n%2==1){
        if((a%2==1&&s[n/2]=='1')||(b%2==1&&s[n/2]=='0')){
            cout<<-1; ret;
        }
        if(s[n/2]=='?'){
            if(a%2==1){ s[n/2]='0'; a--; }
            else{ s[n/2]='1'; b--; }
        }
    }
    f(i,0,n){
        if(s[i]=='?'){
            if(a>0){
                s[i]='0'; s[n-1-i]='0'; a-=2;
            }
            else{
                s[i]='1'; s[n-1-i]='1'; b-=2;
            }
        }
    }
    cout<<s;
    

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