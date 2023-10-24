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
int isSquare(int n){
    int l=1,h=n;
    while(l<=h){
        int mid=(l+h)/2;
        if(mid*mid==n) return mid;
    if(mid*mid<n) l=mid+1;
        else h=mid-1;
    }
    return -1;
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
    vi vb,va;
    mi ma,mb;
    f(i,0,n){
        int x; cin>>x;
        ma[x]++;
    }
    f(i,0,n){
        int x; cin>>x;
        if(ma.find(x)!=ma.end()) ma[x]--;
        else vb.pb(x);
    }
    for(auto it=ma.begin();it!=ma.end();it++)
        while(it->second!=0){
            va.pb(it->first);
            it->second--;
        }
    ma.clear();
    int ans=0;
    for(int i=0;i<vb.size();i++){
        if(vb[i]>9){
            ans++; vb[i]=log10(vb[i])+1; mb[vb[i]]++;
        }
        if(va[i]>9){
            ans++; va[i]=log10(va[i])+1; ma[vb[i]]++;
        }
    }
    for(int i=0;i<va.size();i++){
        if(ma.find(va[i])!=ma.end()&&mb.find(va[i])!=mb.end()){
            if(ma[va[i]]>mb[va[i]]){
                ma[va[i]]-=mb[va[i]];
                mb[va[i]]=0;
            }
            else{
                mb[va[i]]-=ma[va[i]];
                ma[va[i]]=0;
            }
        }
    }
    for(auto it=ma.begin();it!=ma.end();it++){
        if(it->first==1) continue;
        else ans+=it->second;
    }
    for(auto it=mb.begin();it!=mb.end();it++){
        if(it->first==1) continue;
        else ans+=it->second;
    }
    cout<<ans;
    // f(i,0,vb.size()){
    //     mp[vb[i]]++;
    // }
    // for(auto it=mp.begin();it!=mp.end();it++)
    //     if(it->second%2==1&&it->second!=1) ans++;
    // cout<<ans;



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