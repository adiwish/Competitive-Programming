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
int gcd(int a, int b) { if (b == 0) {return a;} return gcd(b, a % b);}
int lcm(int a, int b){return (a/gcd(a,b)*b);}
// int powerRec(int a, int b) { 
// if(b==0) return 1;
// int store = powerRec(a, b/2);
// if(b&1) {return (a* ((store*store) %mod)) %mod;} else{ return (store*store) %mod;} }
// int sum_of_digits(int n) {int sum=0; while(n>0) {sum+=n%10; n/=10; } return sum;}
bool ispalindrome(string s)
{
int i=0, j=s.length()-1;
while(i<=j)
{
if(s[i]!=s[j])
{return false;  break;}
i++;
j--;
}
return true;
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
int dfs(int node,int par,vector<set<int>>& adj,vector<int>& ans,vector<int>& dis){
    ans.push_back(node);
    int ht=1;
    for(auto it:adj[node]){
        if(it==node) continue;
        ht+=dfs(it,node,adj,ans,dis);
    }
    dis[node]=ht;
    return ht;

}
void code(){
    int n,q; cin>>n>>q;
    // cout<<q<<endl;
    vector<set<int>> adj(n);
    vi dis(n);
    vi ans;
    f(i,1,n){
        int x; cin>>x;
        x--;
        adj[x].insert(i);
    }
    int temp=dfs(0,-1,adj,ans,dis);
    unordered_map<int,int> mp;
    f(i,0,ans.size()) mp[ans[i]]=i;
    // f(i,0,n) cout<<ans[i]<<" ";
    // cout<<endl;
    for(auto it:mp){
        // cout<<it.first+1<<" -- "<<it.second+1<<endl;
    }
    while(q--){
        int x,k; cin>>x>>k;
        // cout<<x<<" "<<k<<" --  ";
        x--;
        if(dis[x]<k){
            cout<<-1<<endl; continue;
        }
        cout<<ans[mp[x]+k-1]+1<<endl;
    }
    // cout<<mp[6];



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