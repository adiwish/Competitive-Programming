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
// int gcd(int a, int b) { if (b == 0) {return a;} return gcd(b, a % b);}
// int lcm(int a, int b){return (a/gcd(a,b)*b);}
// int powerRec(int a, int b) { 
// if(b==0) return 1;
// int store = powerRec(a, b/2);
// if(b&1) {return (a* ((store*store) %mod)) %mod;} else{ return (store*store) %mod;} }
// int sum_of_digits(int n) {int sum=0; while(n>0) {sum+=n%10; n/=10; } return sum;}
// bool ispalindrome(string s)
// {
// int i=0, j=s.length()-1;
// while(i<=j)
// {
// if(s[i]!=s[j])
// {return false;  break;}
// i++;
// j--;
// }
// return true;
// }
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
    vi v;
    vvi tower(n);
    f(i,0,n){
        int m; cin>>m;
        f(j,0,m){
            int x; cin>>x;
            tower[i].push_back(x);
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    // f(i,0,v.size()) cout<<v[i]<<" ";
    cout<<endl;
    mi mp;
    f(i,0,v.size()-1){
        mp[v[i]]=v[i+1];
    }
    int s=0,c=0;
    for(auto it:tower){
        f(j,0,it.size()-1){
            if(mp[it[j]]!=it[j+1]){
                // cout<<"YES"<<endl;
                s++; c++; continue;
            }
        }
    }
    cout<<s<<" "<<c+n-1;

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