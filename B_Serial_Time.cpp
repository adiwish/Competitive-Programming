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
bool check(int i,int j,int k,int x,int y,int z,vector<vector<vector<char>>>& v,vector<vector<vector<int>>>& dis){
    if(i>=0&&i<z&&j>=0&&j<x&&k>=0&&k<y&&v[i][j][k]!='#'&&dis[i][j][k]==-1)
        return true;
    if(i==1){
        // cout<<i<<" "<<j<<" "<<k<<endl;  
        // cout<<z<<" "<<x<<" "<<y<<endl; 
        // cout<<v[i][j][k]<<" "<<dis[i][j][k]<<endl;
    }
    
    return false;
}
void update(int x,int y,int z,int a,int b,int c,int step,vector<vector<vector<char>>>& v,vector<vector<vector<int>>>& dis,queue<pair<int,pair<int,int>>>& q){
    int i=z,j=x,k=y;
    i=z+1;
    if(check(i,j,k,a,b,c,v,dis)){
        dis[i][j][k]=step;
        q.push({i,{j,k}});
    }
    i=z-1;
    if(check(i,j,k,a,b,c,v,dis)){
        dis[i][j][k]=step;
        q.push({i,{j,k}});
    }
    i=z; j=x+1;
    if(check(i,j,k,a,b,c,v,dis)){
        dis[i][j][k]=step;
        q.push({i,{j,k}});
    }
    j=x-1;
    if(check(i,j,k,a,b,c,v,dis)){
        dis[i][j][k]=step;
        q.push({i,{j,k}});
    }
    j=x; k=y+1;
    if(check(i,j,k,a,b,c,v,dis)){
        dis[i][j][k]=step;
        q.push({i,{j,k}});
    }
    k=y-1;
    if(check(i,j,k,a,b,c,v,dis)){
        dis[i][j][k]=step;
        q.push({i,{j,k}});
    }
    
}
void code(){
    int z,x,y; cin>>z>>x>>y;

    vector<vector<vector<char>>> v(z, vector<vector<char> >(x, vector<char>(y)));
    f(i,0,z){
        f(j,0,x)
            f(k,0,y) cin>>v[i][j][k];
    }
    int n,m; cin>>n>>m;
    vector<vector<vector<int>>> dis(z, vector<vector<int> >(x, vector<int>(y,-1)));
    queue<pair<int,pair<int,int>>> q;
    q.push({0,{n-1,m-1}});
    dis[0][n-1][m-1]=1;
    int step=2;
    while(!q.empty()){
        int s=q.size();
        while(s--){
            int i=q.front().first;
            int j=q.front().second.first;
            int k=q.front().second.second;
            q.pop();
            update(j,k,i,x,y,z,step,v,dis,q);
        }
        step++;
    }
    int ans=0;
    f(i,0,z){
        f(j,0,x)
            f(k,0,y)
                if(dis[i][j][k]!=-1) ans++;
    }
    // f(i,0,z){
    //     f(j,0,x){
    //         f(k,0,y) cout<<dis[i][j][k]<<" ";
    //         cout<<endl;
    //     }
    //     cout<<endl<<endl;
    // }
    cout<<ans;



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