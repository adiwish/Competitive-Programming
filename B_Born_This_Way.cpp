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

void code(){
    int n,m,ta,tb,k; cin>>n>>m>>ta>>tb>>k;
    int a[n],b[m];
    f(i,0,n) cin>>a[i];
    f(i,0,m) cin>>b[i];
    f(i,0,n){
        
    }

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
    }
}