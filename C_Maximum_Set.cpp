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
int beautiful(int b,int a){
    int ans=0;
    while(a<=b){
        ans++;
        a*=2;
    }
    ret ans;
}
int binarySearch(int a,int b,int s){
    int l=a,h=b;
    if(beautiful(h,b)==s) ret h;
    int mid=(l+h)/2;
    while(l<=h){
        // cout<<mid<<endl;
        if(beautiful(b,mid)==s&&beautiful(b,mid+1)<s) ret mid;
        if(beautiful(b,mid)<s&&beautiful(b,mid+1)<s) h=mid-1;
        if(beautiful(b,mid)==s&&beautiful(b,mid+1)==s) l=mid+1;
        mid=(l+h)/2;
    }
    ret -1;
}
bool secroute(int mid,int s,int b){
    int temp=(mid*pow(2,s-2))*3;
    // cout<<mid<<" -- "<<temp<<endl;
    if(temp<=b) ret true;
    else ret false;
}
int binary(int low,int high,int b,int s){
    int l=low,h=high;
    if(secroute(h,s,b)) ret h;
    int mid=(l+h)/2;
    while(l<=h){
        if(secroute(mid,s,b)&&!secroute(mid+1,s,b)) ret mid;
        if(secroute(mid,s,b)&&secroute(mid+1,s,b)) l=mid+1;
        if(!secroute(mid,s,b)&&!secroute(mid+1,s,b)) h=mid-1;
        mid=(l+h)/2;
    }
    ret low-1;
}

void code(){
    int a,b; cin>>a>>b;
    int s=beautiful(b,a);
    int l=a;
    int r=binarySearch(a,b,s);
    int mid=binary(l,r,b,s);
    int ans=mod((mid-l+1)*s);
    ans+=r-mid;
    ans=mod(ans);
    cout<<s<<" "<<ans;



}

int32_t main(){
    adiwish

    int t; cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}