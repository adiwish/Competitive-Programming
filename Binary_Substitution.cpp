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

void code(){
    int n; cin>>n;
    string s; cin>>s;
    int zero=0,one=0;
    f(i,0,n){
        if(s[i]=='0') zero++;
        else one++;
    }
    if(one==zero){
        cout<<1<<" "<<1<<endl;
        cout<<1<<" "<<n<<" "<<0<<endl; ret;
    }
    else if(one==n||zero==n){
        cout<<n<<" "<<0<<endl;
        ret;
    }
    char c;
    if(one>zero) c='0';
    else c='1';
    int diff=abs(zero-one);
    int in=-1,count=0;
    for(int i=0;i<n;i++){
        //string temp="";
        if(diff==count)
            bk;
        if(s[i]==c){
            in=i; continue;
        }
        cout<<in-count<<" "<<i-count<<" "<<c<<endl;
        count++;
        
    }
    cout<<1<<" "<<n-count<<" "<<c<<endl;

}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    adiwish

    int t; cin>>t;
    while(t--){
        code();
        //cout<<endl;
    }
}