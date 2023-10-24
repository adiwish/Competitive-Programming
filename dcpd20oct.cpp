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
int n;
void code0(){
    int ans=1;
    for(int i=1;i<=n;i++)
        ans*=i;
    cout<<ans<<endl;
}
void code1(){
    int ans=1;
    for(int i=1;i<=n;i++)
        ans*=i;
    return ans;
}

int32_t main(){
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    //#endif
    adiwish

    cin>>n;
    int n1=n;
    code0();
    int ans=code1(n);
    cout<<ans<<endl;


















    int n; cin>>n;
    char a[n][n];
    int i0=0,j0=1,i1=0,j1=0;
    bool xx=false,zz=true;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            char x; cin>>x;
            if(x=='x'){
                a[i1][j1]='x';
                j1+=2;
                if(j1>=n){ 
                    i1++;
                    if(xx==true){
                        j1--; xx=false;
                    }
                    else{
                        j1++; xx=true;
                    }
                }
                i1%=n; j1%=n;
            }
            else{
                a[i0][j0]='0';
                j0+=2;
                if(j0>=n){ 
                    if(zz==true){
                        j0--; zz=false;
                    }
                    else{
                        j0++; zz=true;
                    }
                    i0++;
                }
                i0%=n; j0%=n; 
            }
        }
    f(i,0,n){
        f(j,0,n) cout<<a[i][j]<<" ";
        cout<<endl;
    }


    // vector<int> a(5),b(10);
    // for(int i=0;i<5;i++) cin>>a[i];
    // for(int i=0;i<10;i++) cin>>b[i];
    // vector<int> ans=a;
    // ans.insert(ans.end(),b.begin(),b.end());
    // for(int i=0;i<5;i++) a[i]=0;
    // for(int i=0;i<10;i++) b[i]=0;
    // cout<<ans;


    // int n; cin>>n;
    // int a[n];
    // int sum=0;
    // f(i,0,n){
    //     a[i]=temp; temp--;
    //     if((i)%2==1) cout<<n-i<<" ";
    //     if((n-i)%2==0) sum+=(n-i);
    // }
    // cout<<endl;
    // cout<<sum;

}