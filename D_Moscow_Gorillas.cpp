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
int count(int n){
    if(n<0) return 0;
    return (n*(n+1))/2;
}
bool overlap(int le,int ri,int x,int y){
    // cout<<"overlap  "<<le<<" "<<ri<<"  --  "<<x<<" "<<y<<endl;
    if((y<=ri&&y>=le)||(x<=ri&&x>=le)) return true;
    return false;
}
void code(){
    int n; cin>>n;
    unordered_map<int,pair<int,int>> mp;
    f(i,0,n){
        int x; cin>>x;
        mp[x].first=i+1;
    }
    f(i,0,n){
        int x; cin>>x;
        mp[x].second=i+1;
    }

    fe(i,1,n)
        if(mp[i].first>mp[i].second)
            swap(mp[i].first,mp[i].second);

    int le=mp[1].first,ri=mp[1].second;
    int ans=0;
    ans=ans+count(le-1)+count(ri-le-1)+count(n-ri);

    for(int i=2;i<=n;i++){
        int x=mp[i].first,y=mp[i].second;
        if(overlap(le,ri,x,y)){
            le=min(le,x);
            ri=max(ri,y);
            continue;
        }
        if(y<le)
            ans+=(le-y)*(n-ri+1);
        else if(x>ri)
            ans+=(x-ri)*(le);
        else
            ans+=(le-x)*(y-ri);

        ans++;
        le=min(le,x);
        ri=max(ri,y);
    }
    ans++;
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
    //     cout<<endl;
    // }
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