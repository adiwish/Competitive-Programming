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
bool check( int mid,int a[],int n,int c,int d){
    mid++;
    //if(mid>=d) return false;
    int ans=0;
    int temp=d/mid;
    ans=temp*a[min(n,mid)-1];
    temp=d%mid;
    if(temp!=0)
        ans+=a[min(n,temp)-1];
    //cout<<mid-1<<" "<<ans<<endl;
    if(ans>=c) return true;
    else return false;
}

void code(){
    int n,c,d; cin>>n>>c>>d;
    int a[n];
    f(i,0,n) cin>>a[i];
    sort(a,a+n,cmp);
    f(i,1,n) a[i]+=a[i-1];

    
    if(a[min(d,n)-1]>=c){
        cout<<"Infinity"; ret;
    }
    else if(a[0]*d<c){
        cout<<"Impossible"; ret;
    }

    int l=0,h=d-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(check(mid,a,n,c,d)==true&&check(mid+1,a,n,c,d)==false){
            cout<<mid; ret;
        }
        if(check(mid,a,n,c,d)==true&&check(mid+1,a,n,c,d)==true)
            l=mid+1;
        else h=mid-1;
    }
    cout<<"Ae ji gaali de rha hai"; ret;


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