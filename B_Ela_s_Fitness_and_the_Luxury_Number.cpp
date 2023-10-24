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
int floorSqrt(int x)
{
    if (x == 0 || x == 1)
        return x;
    int start = 1, end = 1000000000, ans;
    int temp=1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if(temp==1)
            mid=end;
        temp--;
        
        int sqr = mid * mid;
        if (sqr == x)
            return mid;
        if (sqr <= x) {
            start = mid + 1;
            ans = mid;
        }
        else
            end = mid - 1;
    }
    return ans;
}

void code(){
    int a,b; cin>>a>>b;
    int x=floorSqrt(a),y=floorSqrt(b);
    //cout<<"x= "<<x<<"  y= "<<y<<endl;
    int num1=x*x,num2=y*y;
    //cout<<"num1= "<<num1<<"  num2= "<<num2<<endl;
    if(num1==a&&num2==b){
        cout<<((y-x)*3)+1; ret;
    }
    int ans=0;
    ans+=(y-x)*3;
    num2=b-num2;
    ans+=num2/y;
    //cout<<ans<<endl;
    num1=a-num1-1;
    ans-=num1/x;
    // //cout<<ans<<endl;
    // ans=23548635020201489*23548635020201489;
    cout<<ans;
    //cout<<endl<<b;

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
long long findQuadruples(int n,int* arr){
    
    int pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++)
        pre[i]=min(a[i],pre[i-1]);
    
    int suff[n];
    suff[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        suff[i]=max(a[i],suff[i+1]);
    
    int ans=0;
    for(int j=1;j<n-2;j++){
        for(int k=j+1;k<n-1;k++){
            
            if(pre[k-1]<a[k]&&a[k]<a[j]&&a[j]<suff[j+1]){
                cout<<j<<" "<<j+1<<" "
                ans++;
            }
                
        }
    }
    return ans;
}