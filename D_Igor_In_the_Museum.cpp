#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define AdityaBarnwal 1
#define sg string
#define vi vector<int>
#define vvi vector<vector<int>>
#define vc vector<char>
#define mi unordered_map<int,int> 
#define mc unordered_map<char,char>
#define mic unordered_map<int,char>
#define mci unordered_map<char,int>
#define mib unordered_map<int,bool> 
#define mivec unordered_map<int,vector<int>> 
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

//Debug
#ifdef AdityaBarnwal
#define debug(x) cerr << #x<<" "; cerr<<x<<" "; cerr << endl;
#else
#define debug(x);
#endif

// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
int modulo(int n){  return n % mod; }
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

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
void countP(int i,int j,vector<vector<char>>& mt,vector<vector<int>>& vis,int& cnt){
    int n=mt.size(),m=mt[0].size();
    // cout<<i<<" "<<j<<endl;
    vis[i][j]=-1;
    int r=i,c=j;

    r=i+1;
    if(r>=0&&r<n&&c>=0&&c<m&&mt[r][c]=='.'&&vis[r][c]==0)
        countP(r,c,mt,vis,cnt);
    else if(r>=0&&r<n&&c>=0&&c<m&&mt[r][c]=='*'&&vis[r][c]==0) cnt++;
    
    r=i-1;
    if(r>=0&&r<n&&c>=0&&c<m&&mt[r][c]=='.'&&vis[r][c]==0)
        countP(r,c,mt,vis,cnt);
    else if(r>=0&&r<n&&c>=0&&c<m&&mt[r][c]=='*'&&vis[r][c]==0) cnt++;

    r=i; c=j+1;
    if(r>=0&&r<n&&c>=0&&c<m&&mt[r][c]=='.'&&vis[r][c]==0)
        countP(r,c,mt,vis,cnt);
    else if(r>=0&&r<n&&c>=0&&c<m&&mt[r][c]=='*'&&vis[r][c]==0) cnt++;

    c=j-1;
    if(r>=0&&r<n&&c>=0&&c<m&&mt[r][c]=='.'&&vis[r][c]==0)
        countP(r,c,mt,vis,cnt);
    else if(r>=0&&r<n&&c>=0&&c<m&&mt[r][c]=='*'&&vis[r][c]==0) cnt++;

}
void setAns(int i,int j,vector<vector<char>>& mt,vector<vector<int>>& vis,int& cnt){
    int n=mt.size(),m=mt[0].size();
    
    int r=i,c=j;
    vis[i][j]=cnt;
    r=i+1;
    if(r>=0&&r<n&&c>=0&&c<m&&vis[r][c]==-1)
        setAns(r,c,mt,vis,cnt);
    
    r=i-1;
    if(r>=0&&r<n&&c>=0&&c<m&&vis[r][c]==-1)
        setAns(r,c,mt,vis,cnt);

    r=i; c=j+1;
    if(r>=0&&r<n&&c>=0&&c<m&&vis[r][c]==-1)
        setAns(r,c,mt,vis,cnt);

    c=j-1;
    if(r>=0&&r<n&&c>=0&&c<m&&vis[r][c]==-1)
        setAns(r,c,mt,vis,cnt);
}
void code(){
    int n,m,q; cin>>n>>m>>q;
    vector<vector<char>> mt(n,vector<char>(m));
    f(i,0,n) cin>>mt[i];
    vector<vector<int>> vis(n,vector<int>(m,0));
    f(i,0,n){
        f(j,0,m){
            if(mt[i][j]=='.'&&vis[i][j]==0){
                int cnt=0;
                countP(i,j,mt,vis,cnt);
                setAns(i,j,mt,vis,cnt);
            }
        }
    }
    // int cnt=0;
    // countP(1,1,mt,vis,cnt);
    // f(i,0,n) cout<<vis[i]<<endl;
    while(q--){
        int x,y; cin>>x>>y;
        x--; y--;
        cout<<vis[x][y]<<endl;
    }

}

int32_t main(){
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    //#endif
    adiwish

    // int t; cin>>t;
    // while(t--)
    {
        code();
        cout<<endl;
    }
}