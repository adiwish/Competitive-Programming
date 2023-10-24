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


//////////////////////////////////////////////////////////////////////
class Solution {
public:
    void update(int r,int c,int n,int m,int val,vector<vector<int>>& ht,vector<vector<int>>& vis,
    queue<pair<int,pair<int,int>>> q){
        int x=r+1,y=c;
        if(x>=0&&x<n&&y>=0&&y<m&&ht[x][y]<=val&&!vis[x][y]){
            vis[x][y]=1;
            q.push({ht[x][y],{x,y}});
        }
        x=r-1;
        if(x>=0&&x<n&&y>=0&&y<m&&ht[x][y]<=val&&!vis[x][y]){
            vis[x][y]=1;
            q.push({ht[x][y],{x,y}});
        }
        x=r; y=c-1;
        if(x>=0&&x<n&&y>=0&&y<m&&ht[x][y]<=val&&!vis[x][y]){
            vis[x][y]=1;
            q.push({ht[x][y],{x,y}});
        }
        y=c+1;
        if(x>=0&&x<n&&y>=0&&y<m&&ht[x][y]<=val&&!vis[x][y]){
            vis[x][y]=1;
            q.push({ht[x][y],{x,y}});
        }

    }
    void dfs(int r,int c,int n,int m,int val,vector<vector<int>>& ht,vector<vector<int>>& vis,vector<vector<int>>& flow){
        queue<pair<int,pair<int,int>>> q;
        q.push({val,{r,c}});
        vis[r][c]=1;
        while(!q.empty()){
            val=q.front().first;
            r=q.front().second.second;
            c=q.front().second.first;
            q.pop();
            flow[r][c]++;
            update(r,c,n,m,val,ht,vis,q);
        }
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& ht) {
        int n=ht.size(),m=ht[0].size();
        vector<vector<int>> flow(n,vector<int>(m,0));
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++)
            if(!vis[0][j])
                dfs(0,j,n,m,ht[0][j],vis,flow,);
        for(int j=0;j<m;j++)
            if(!vis[n-1][j])
                dfs(0,j,n,m,ht[n-1][j],vis,flow,);
        
        for (int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                vis[i][j]=0;

        for(int i=0;i<n;i++)
            if(!vis[i][0])
                dfs(0,i,n,m,ht[i][0],vis,flow,);
        for(int i=0;i<n;i++)
            if(!vis[i][m-1])
                dfs(0,i,n,m,ht[i][m-1],vis,flow,);
        
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                vector<int> temp;
                if(flow[i][j]==2){
                    temp.pb(i); temp.pb(j)
                    ans.pb(temp);
                    temp.pop_back(); temp.pop_back();
                }
            }
        return 
        
        
        
    
    }
};
//////////////////////////////////////////////////////////////////////


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
bool valid(int r,int c,int n,int m){
    if(r==0||c==0||r==n-1||c==m-1) return true;
    return false;
}
void update(int r,int c,int n,int m,vector<vector<char>>& maze,vector<vector<int>>& vis,queue<pair<int,int>>& q){
    int x=r+1,y=c;
    if(x>=0&&x<n&&y>=0&&y<m&&maze[x][y]!='#'&&!vis[x][y]){
        vis[x][y]=1;
        q.push({x,y});
    }
    x=r-1;
    if(x>=0&&x<n&&y>=0&&y<m&&maze[x][y]!='#'&&!vis[x][y]){
        vis[x][y]=1;
        q.push({x,y});
    }
    x=r; y=c-1;
    if(x>=0&&x<n&&y>=0&&y<m&&maze[x][y]!='#'&&!vis[x][y]){
        vis[x][y]=1;
        q.push({x,y});
    }
    y=c+1;
    if(x>=0&&x<n&&y>=0&&y<m&&maze[x][y]!='#'&&!vis[x][y]){
        vis[x][y]=1;
        q.push({x,y});
    }
}
bool dfs(pair<int,int> start,int n,int m,vector<vector<char>>& maze,vector<vector<int>>& vis){
    queue<pair<int,int>> q;
    update(start.first,start.second,n,m,maze,vis,q);
    vis[start.first][start.second]=1;
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        if(valid(r,c,n,m))
            return true;
        update(r,c,n,m,maze,vis,q);
    }
    return false;
}

void code(){
    int n,m; cin>>n>>m;
    vector<vector<char>> maze(n,vector<char> (m));
    vector<pair<int,int>> first;
    vector<vector<int>> vis(n,vector<int> (m,0));
    f(i,0,n)
        f(j,0,m){ 
            cin>>maze[i][j];
            if((i==0||i==n-1||j==0||j==m-1)&&maze[i][j]=='.')
                first.push_back({i,j});
        }
    if(first.size()!=2){
        cout<<"invalid"; ret;
    }
    
    if(dfs(first[0],n,m,maze,vis)){
        cout<<"valid";
        ret;
    }
    
    cout<<"invalid";
    

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
