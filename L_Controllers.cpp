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
#define fa(i,a) for(auto i:a)

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


void code(){
    int n; cin>>n;
    sg s; cin>>s;
    int plus=0,minus=0;
    fa(i,s){
        if(i=='+') plus++;
        else minus++;
    }
    if(plus>minus) swap(plus,minus);
    set<pair<int,int>> st;
    f(i,0,plus){
        int gc=__gcd(plus-i,minus-i);
        int  x=(plus-i)/gc,y=(minus-i)/gc;
        if(x>y) swap(x,y);
        st.insert({x,y});
    }
    int q; cin>>q;
    while(q--){
        int x,y; cin>>x>>y;
        if(plus==minus){
            cout<<"YES"<<endl; continue;
        }
        int gc=__gcd(x,y);
        x/=gc; y/=gc;
        if(x>y) swap(x,y);
        if(st.find({x,y})!=st.end()&&(x<=plus&&y<=minus)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }


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