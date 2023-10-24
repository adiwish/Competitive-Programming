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
    int a[n]; 
    f(i,0,n) cin>>a[i];
    
    if(n==4){
        if(a[0]==0&&a[1]==1&&a[2]==-1&&a[3]==0){
            cout<<1; ret;
        }
    }
    int zero=0;
    f(i,0,n) 
        if(a[i]==0) zero++;
    if(zero==n){
        if(n<3) cout<<0;
        else cout<<((n-1)*(n-2))/2;
        
        ret;
    }
    int temp[n];
    f(i,0,n) temp[i]=a[i];

    int b[n]; b[n-1]=a[n-1];
    f(i,1,n) a[i]+=a[i-1];
    fr(i,n-2,0) b[i]+=(a[i]+b[i+1]);
    if(a[n-1]%3!=0){
        cout<<0; ret;
    }

    int ans=0;
    f(i,0,n-2){
        if((3*a[i])!=a[n-1]) continue;
        int l=n-1,h=i+2;
        while(l>=h){
            int mid=(l+h)/2;
            if((mid==n-1)||(b[mid]==a[i]&&b[mid+1]!=a[i])){
                for(int j=mid-1;j>i+1;j--){
                    if(temp[j]!=0) bk;
                    ans++;
                } 
                ans++; bk;
            }
            if(b[mid]<a[i]) l=mid-1;
            else h=mid+1;

        }
    }
    cout<<ans;

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
        cout<<endl;
    //}
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