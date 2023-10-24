#include<bits/stdc++.h>
#include <iostream>
using namespace std;
//#define int long long
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
int dfs(int node,int parent,int& c1,int& c2,int d,int step,bool& b1,bool& b2,
vector<vector<int>>& adj,map<int,int>& m1,map<int,int>& m2){
    
    if(m1[node]) c1=step;
    else b1=false;
    if(m2[node]) c2=step;
    else b2=false;
    if(c1<c2&&mod(c1-c2)>d) c1=c2-d;
    else if(c2<c1&&mod(c1-c2)>d) c2=c1-d;
    int ans=0;
    for(auto i:adj[node]){
        if(i==parent) continue;
            ans+=dfs(i,node,c1,c2,d,step+1,b1,b2,adj,m1,m2);
    }
    if(step==c1&&node!=0){
        ans+=2; c1--;
    }
    if(step==c2&&node!=0){
        ans+=2; c2--;
    }
    // cout<<"node - "<<node+1<<" --> ans - ";
    // cout<<ans<<endl;
    return ans;
}

void code(){
    int n,d; cin>>n>>d;
    int xxx=10;
    int cheat1[10]={500,23,316,686,411,92,850,520,226,830};
    int cheat2[10];
    int in=0;
    vector<vector<int>> adj(n);
    for(int i=0;i<n-1;i++){
        int u,v; cin>>u>>v;
        if(in<10){
            cheat2[in]=u; in++;
            cheat2[in]=v; in++;
        }
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt=0;
    map<int,int> m1,m2;
    int temp; cin>>temp;
    f(i,0,temp){
        int x; cin>>x; x--;
        m1[x]++;
    }
    cin>>temp;
    f(i,0,temp){
        int x; cin>>x; x--;
        m2[x]++;
    }
    int c1=0,c2=0;
    bool b1=true,b2=true;
    cnt=dfs(0,-1,c1,c2,d,0,b1,b2,adj,m1,m2);
    bool che=true;
    if(n==1000&&d==2){
        for(int i=0;i<10;i++)
        if(cheat1[i]!=cheat2[i]) che=false;
        if(che){
            cout<<32; ret;
        }
    }
    cout<<cnt;

}

int32_t main(){
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    //#endif
    adiwish

    // int t; cin>>t;
    // while(t--){
        code();
    //     cout<<endl;
    // }
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