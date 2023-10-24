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
    vi a(n);
    f(i,0,n) cin>>a[i];
    int k; cin>>k;
    vi b(k);
    f(i,0,k) cin>>b[i];

    vector<pair<int,int>> ans1;
    pair<int,int> last={a[0],1};
    if(a[0]!=m&&a[0]%m==0) last={a[0]/m,m};
    for(int i=1;i<n;i++){
        if(i==n-1){
            if(a[i]%m==0&&last.first==a[i]/m){
                last.second+=m;
                ans1.pb(last);
                continue;
            }
            ans1.pb(last);
            ans1.pb({a[i],0});
            continue;
        }
        if(a[i]%m==0&&last.first==a[i]/m){
            last.second+=m;
            continue;
        }
        ans1.pb(last);
        last={a[i],1};
        continue;
    }

    vector<pair<int,int>> ans2;
    last={b[0],1};
    for(int i=1;i<k;i++){
        if(i==k-1){
            if(b[i]%m==0&&last.first==b[i]/m){
                last.second+=m;
                ans2.pb(last);
                continue;
            }
            ans2.pb(last);
            ans1.pb({b[i],0});
            continue;
        }
        if(b[i]%m==0&&last.first==b[i]/m){
            last.second+=m;
            continue;
        }
        ans2.pb(last);
        last={b[i],1};
        continue;
    }

    n=ans1.size(); k=sz(ans2);
    if(n!=k){
        cout<<"NO"; ret;
    }
    for(int i=0;i<n;i++){
        if(ans1[i]!=ans2[i]){
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