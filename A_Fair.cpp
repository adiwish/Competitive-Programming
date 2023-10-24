#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define sg string
#define vi vector<int>
#define vvi vector<vector<int>>
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
int dij(int in,int n,int s,int pro[],vector<vector<int>>& adj){
    // priority_queue<pair<int, int>,
	// 	vector<pair<int, int> >, greater<pair<int, int>>> pq;
    // vi dis(n,INT_MAX);
    // pq.push({0,in});
    // dis[in]=0;
    unordered_map<int,bool> mp;
    queue<pair<int,int>> pq; pq.push({in,0});
    s--; mp[pro[in]]=true;
    vi vis(n,0); vis[in]=1;
    int ans=0;
    while(!pq.empty()){
        int node=pq.front().first;
        int wt=pq.front().second;
        pq.pop();
        if(!mp[pro[node]]){
            ans+=wt; mp[pro[node]]=true;
            s--;
        }
        if(s==0) break;
        for(auto it:adj[node]){
            if(!vis[it]){
                pq.push({it,wt+1});
                vis[it]=1;
            }
        }
    }
    // cout<<in<<" --  "<<ans<<endl;
    return ans;
}

void code(){
    int n,m,k,s; cin>>n>>m>>k>>s;
    int pro[n];
    f(i,0,n) cin>>pro[i];
    vvi adj(n);
    while(m--){
        int x,y; cin>>x>>y;
        x--; y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int ans[n]; 
    int temp=0;
    // f(i,0,n)
    //     temp=dij(i,n,s,pro,adj);
    f(i,0,n)
        cout<<dij(i,n,s,pro,adj)<<" ";
    // f(i,0,n) cout<<ans[i]<<" ";
    

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