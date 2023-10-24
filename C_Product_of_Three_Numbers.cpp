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
int pro(int a, int c ){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0&&i!=c&&a/i!=c&&i!=a/i){
            ret i;
        }
    }
    ret 0;
}

void code(){
    int n; cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int a=n/i;
            int b=pro(i,n/i);
            int c;
            if(b!=0) c=i/b;
            if(b!=0&&a!=b&&a!=c&&b!=c){
                cout<<"YES"<<endl<<a<<" "<<b<<" "<<c; ret;
            }
            a=i;
            b=pro(n/i,i);
            if(b!=0) c=(n/i)/b;
            if(b!=0&&a!=b&&a!=c&&b!=c){
                cout<<"YES"<<endl<<a<<" "<<b<<" "<<c; ret;
            }
        }
    }
    cout<<"NO"; ret;

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