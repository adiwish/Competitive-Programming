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
    sg a,b; cin>>a>>b;
    int same=0;
    f(i,0,n)
        if(a[i]==b[i]) same++;
    if(same!=0&&same!=n){
        cout<<"NO"<<endl; ret;
    }
    if(n==1){
        if(b[0]=='1'){
            cout<<"NO"<<endl;ret;
        }
        if(a[0]=='0') cout<<"YES"<<endl<<0<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<1<<endl;
            cout<<1<<" "<<1<<endl;

        }
        ret;
    }
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        if(a[i]=='1') v.pb({i+1,i+1});
    }
    int l=v.size();
    //cout<<same<<" "<<l<<endl;
    if((same==n&&(l%2==1))||(same==0&&(l%2==0))){

        v.pb({1,n});
        v.pb({2,n});
        v.pb({1,1});
    }
    l=sz(v);
    cout<<"YES"<<endl;
    cout<<l<<endl;
    for(int i=0;i<l;i++) cout<<v[i].first<<" "<<v[i].second<<endl;

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
        //cout<<endl;
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