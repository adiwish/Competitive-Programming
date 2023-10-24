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
    int n; cin>>n;
    vi v(n);
    f(i,0,n) cin>>v[i];
    bool zero=false;
    int neg=0,pos=0;
    f(i,0,n){
        if(v[i]<0) neg++;
        if(v[i]>0) pos++;
        if(v[i]==0) zero=true;
    }
    if(zero){
        pos++;
        neg++;
    }
    if(neg>=3||pos>=3){
        cout<<"NO"; ret;
    }
    vi a;
    f(i,0,n)
        if(v[i]>0||v[i]<0)
            a.push_back(v[i]);
    if(zero)
        a.push_back(0);
    n=sz(a);
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k=j+1;k<n;k++){
                int temp=a[i]+a[j]+a[k];
                bool ans=false;
                for(int l=0;l<n;l++)
                    if(a[l]==temp){
                        ans=true; bk;
                    }
                if(ans==false){
                    cout<<"NO"; ret;
                }
            }
    cout<<"YES"; ret;
    

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