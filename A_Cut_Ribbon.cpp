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
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
void code(){
    int n; cin>>n;
    int a[n]; cin>>a[0];
    int x=a[0];
    int sum[n]; sum[0]=a[0];
    f(i,1,n){
        cin>>a[i]; sum[i]=sum[i-1]+a[i];
        x=x&a[i];
    }
    int ans=-1;
    f(i,0,n-1){
        if(((sum[n-1]-sum[i])&sum[i])!=0){
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<i+1<<endl;
            cout<<i+2<<" "<<n<<endl; ret;
        }
    }
    if(x!=0){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++)
            cout<<i<<" "<<i<<endl;
        ret;
    }
    x=a[0];
    int temp=a[0];
    int in=-1;
    f(i,0,n){
        if(a[i]!=0){
            temp=a[i]; in=i; break;
            //cout<<temp<<endl;
        }
    }
    f(i,in+1,n-1){
        if((((sum[n-1]-sum[i])&(sum[i]-temp))&temp)!=0){
            in++;
            cout<<"YES"<<endl;
            cout<<3<<endl;
            cout<<1<<" "<<in<<endl;
            cout<<in+1<<" "<<i+1<<endl;
            cout<<i+2<<" "<<n<<endl; ret;
        }
    }
    in=-1;
    f(i,1,n){
        x&=a[i];
        if(x!=0){
            in=i+1; bk;
        }
    }
    f(i,in,n-1){
        if((((sum[n-1]-sum[i])&(sum[i]-sum[in-1]))&x)!=0){
            cout<<"YES"<<endl;
            cout<<3<<endl;
            cout<<1<<" "<<in<<endl;
            cout<<in+1<<" "<<i+1;
            cout<<i+2<<" "<<n<<endl; ret;
        }
    }
    cout<<"NO"<<endl;




    

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