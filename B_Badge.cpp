#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define ll long long
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
ll powerRec(ll a, ll b, ll mod) { 
  if(b==0) return 1;
  ll store = powerRec(a, b/2, mod);
  if(b&1) {return (a* ((store*store) %mod)) %mod;} else{ return (store*store) %mod;} 
}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; 
  for (int i = 2; i <= n; i++)
  if (arr[i] == 0) {vect.push_back(i); 
  for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;
}
ll sum_of_digits(ll n) {ll sum=0; while(n>0) {sum+=n%10; n/=10; } return sum;}

void code(){
    


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