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
#define ff first
#define ss second
#define mp make_pair
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
// for loop
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,a,b) for(int i=a;i>=b;i--) // reverse forloop

using ll= long long;
using lld= long double;
using ull= unsigned long long;
#define ret return
#define bk break
#define endl "\n"
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

int modulo(int n){
    return n % 1000000007;
}
int gcd(int a, int b) { if (b == 0) {return a;} return gcd(b, a % b);}
int lcm(int a, int b){return (a/gcd(a,b)*b);}
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
bool ispos(int k,int s,vi v){
    if(k==0) return true;
    if(k==sz(v)+1) return false;
    f(i,0,sz(v)){
        v[i]=v[i]+(i+1)*k;
    }
    // f(i,0,sz(n)) cout<<v[i]<<" ";
    // cout<<endl;
    sort(vr(v));
    int ans=0;
    // f(i,0,sz(n)) cout<<v[i]<<" ";
    // cout<<endl;
    f(i,0,k) ans+=v[i];
    // cout<<k<<"  -- "<<ans<<endl;
    if(ans<=s) return true;
    else return false;

}
int minm(int k,int s,vi v){
    f(i,0,sz(v)){
        v[i]=v[i]+(i+1)*k;
    }
    sort(vr(v));
    int ans=0;
    f(i,0,k) ans+=v[i];
    return ans;
}

void code(){
    int n,s; cin>>n>>s;
    vi v(n);
    f(i,0,n) cin>>v[i];
    int l=0,h=n;
    while(l<=h){
        int mid=(l+h)/2;
        int ans=-1;
        // cout<<mid<<endl;
        if(ispos(mid,s,v)&&!ispos(mid+1,s,v)){
            cout<<mid<<" "; 
            cout<<minm(mid,s,v); ret;
        }
        if(ispos(mid+1,s,v)) l=mid+1;
        else h=mid-1;
    }
    cout<<-1;
    // if(ispos(3,s,v)) cout<<"YES"<<endl;
    // else cout<<"NO";
    // if(ispos(4,s,v)) cout<<"YES"<<endl;
    // else cout<<"NO";



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
    // }
}