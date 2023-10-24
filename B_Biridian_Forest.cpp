#include<bits/stdc++.h>
#include <iostream>
using namespace std;
// #define int long long
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
void update(int r,int c,int n,int m,int step,vector<vector<char>>& a,vector<vector<int>>& dis,queue<pair<int,int>>& q){
    int x=r,y=c;
    x=r+1;
    if(x>=0&&x<n&&y>=0&&y<m&&dis[x][y]==INT_MAX&&a[x][y]!='T'){
        q.push({x,y});
        dis[x][y]=step;
    }
    x=r-1;
    if(x>=0&&x<n&&y>=0&&y<m&&dis[x][y]==INT_MAX&&a[x][y]!='T'){
        q.push({x,y});
        dis[x][y]=step;
    }
    x=r; y=c-1;
    if(x>=0&&x<n&&y>=0&&y<m&&dis[x][y]==INT_MAX&&a[x][y]!='T'){
        q.push({x,y});
        dis[x][y]=step;
    }
    y=c+1;
    if(x>=0&&x<n&&y>=0&&y<m&&dis[x][y]==INT_MAX&&a[x][y]!='T'){
        q.push({x,y});
        dis[x][y]=step;
    }

}

void code(){
    int n,m; cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    pair<int,int> st,en;
    f(i,0,n)
        f(j,0,m){
            cin>>a[i][j];
            if(a[i][j]=='S'){
                st.first=i; st.second=j;
            }
            if(a[i][j]=='E'){
                en.first=i; en.second=j;
            }

        }
    vector<vector<int>> dis(n,vector<int>(m,INT_MAX));
    queue<pair<int,int>> q;
    q.push(en);
    dis[en.first][en.second]=0;
    int step=1;
    while(!q.empty()){
        int s=q.size();
        while(s--){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            update(r,c,n,m,step,a,dis,q);
        }
        step++;
    }
    int ans=0;
    f(i,0,n){
        f(j,0,m){
            if(a[i][j]>='1'&&a[i][j]<='9'&&dis[i][j]<=dis[st.first][st.second])
                ans+=(a[i][j]-'0');
        }
    }
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