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
    int n,k; cin>>n>>k;
    sg temp; cin>>temp;
    sg s=temp;

    int cnt=0;
    for(int i=0;i<n;i++)
        if(s[i]=='1') cnt++;
    if(cnt==n){
        for(int i=0;i<n;i++) cout<<'0';
        return;
    }
    
    for(int i=1;i<n-1;i++){
        if(temp[i]=='0'&&(temp[i-1]=='1'||temp[i+1]=='1'))
            s[i]='1';
        else if(temp[i]=='1') s[i]='0'; 
    }
    if(temp[0]=='0'&&temp[1]=='1') 
        s[0]='1';
    else if(temp[0]=='1') s[0]='0';
    if(temp[n-1]=='0'&&temp[n-2]=='1') 
        s[n-1]='1';
    else if(temp[n-1]='1') s[n-1]='0';
    cout<<s<<endl;
    //return;
    k--;
    //cout<<k<<endl;
    if(k==0){
        cout<<s; return;
    }
    int pre[n],suff[n];

    if(s[0]=='0') pre[0]=INT_MAX;
    else pre[0]=1;
    if(s[n-1]=='0') suff[n-1]=INT_MAX;
    else suff[n-1]=1;
    for(int i=1;i<n;i++){
        if(s[i]=='1') pre[i]=0;
        else pre[i]=pre[i-1]+1;
    }

    for(int i=n-2;i>=0;i--){
        if(s[i]=='1') suff[i]=0;
        else suff[i]=suff[i+1]+1;
    }
    for(int i=0;i<n;i++) cout<<pre[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++) cout<<suff[i]<<" ";
    cout<<endl;
    // return;
    for(int i=0;i<n;i++){
        int dis=min(pre[i],suff[i]);
        //cout<<dis;
        if(dis>k){ 
            cout<<s[i]; continue;
        }
        if(dis==0){
            if(k%2==1) cout<<'0';
            else cout<<'1'; continue;
        }
        dis=k-(dis-1);
        if(s[i]=='1'){
            if(k%2==1) cout<<'0';
            else cout<<'1';
        }
        else{
            if(k%2==1) cout<<'1';
            else cout<<'0';
        }
        //cout<<" ";
    }
    cout<<endl;
    



    

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