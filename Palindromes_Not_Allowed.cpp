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
bool cmp(pair<int,char> a, pair<int,char> b){
    return a.first>b.first;
}

void code(){
    int n; cin>>n;
    sg s; cin>>s;
    pair<int,char> a[26];
    f(i,0,n) a[i].first=0;
    f(i,0,n)
        a[s[i]-'a'].first++;
    sort(a,a+n,cmp);
    if(a[0].first>n/3){
        cout<<"NO"; ret;
    }

    char c[n];
    int j=0;
    for(int i=0;i<n;i=i+3){
        while(j<n&&a[j].first==0) j++;
        if(j>=n) bk;
        c[i]=a[j].second; a[j].first--;
    }

    j=0;
    for(int i=1;i<n;i=i+3){
        while(j<n&&a[j].first==0) j++;
        if(j>=n) bk;
        c[i]=a[j].second; a[j].first--;
    }

    j=0;
    for(int i=2;i<n;i=i+3){
        while(j<n&&a[j].first==0) j++;
        if(j>=n) bk;
        c[i]=a[j].second; a[j].first--;
    }

    for(int i=1;i<n;i++)
        if(c[i]==c[i-1]){
            cout<<"NO"; ret;
        }
    for(int i=2;i<n;i++)
        if(c[i]==c[i-2]){
            cout<<"NO"; ret;
        }
        
    cout<<"YES"<<endl;
    f(i,0,n) cout<<c[i];


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