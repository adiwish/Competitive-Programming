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
void prefix(vector<vector<int>>& pre,int n,int m){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            pre[i][j]=pre[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
}
bool check(vector<vector<int>>& a,int mid,int n,int m){
    vector<vector<int>> pre(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]>=mid) pre[i][j]=1;
    prefix(pre,n,m);
    for(int i=mid;i<=n;i++)
        for(int j=mid;j<=m;j++){
            int sum=pre[i][j]-pre[i-mid][j]-pre[i][j-mid]+pre[i-mid][j-mid];
            if(sum==(mid*mid)) return true;
        }
    return false;
        
}

void code(){
    // int n,m; cin>>n>>m;
    // vector<vector<int>> a(n+1,vector<int>(m+1,0));
    // for(int i=1;i<=n;i++)
    //     for(int j=1;j<=m;j++)
    //         cin>>a[i][j];
    // int low=1,high=n;
    // while(low<=high){
    //     int mid=(low+high)/2;
    //     bool curr=check(a,mid,n,m),next=check(a,mid+1,n,m);
    //     if(curr&&!next){
    //         cout<<mid; ret;
    //     }
    //     if(curr&&next) low=mid+1;
    //     else high=mid-1;
    // }
    // cout<<-1;
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