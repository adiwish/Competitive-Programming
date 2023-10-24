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
void rvereseArray(int arr[])
{
    int start=0,end=63;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}  
void decToBinary(int n,int binaryNum[])
{
    // this function will change decimal to binary
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    f(j,i,64) binaryNum[j]=0;
    
}

void code(){
    int n,m; cin>>n>>m;
    int a[64],b[64];

    // converting decimal to binary
    decToBinary(n,a);
    decToBinary(m,b);

    // checking for not possible case
    if(m>n||m&n!=m){
        cout<<-1; ret;
    }
    if(n==m){
        cout<<n; ret;
    }
    // checking if a bit is 1 in m but 0 in n
    for(int i=0;i<64;i++)
        if(a[i]==0&&b[i]==1){
            cout<<-1; ret;
        }
    
    // ab iske niche thoda sa apna logic
    int ans=-1;
    fr(i,63,0)
        if(a[i]!=b[i]){
            ans=i; bk;
        }
    ans=pow(2,ans);
    int diff=n/ans;
    if(diff%2==1) diff++;
    ans=ans*diff;

    int c[64];
    decToBinary(ans,c);

    //checking if ( (my answer)&m ) AND will be m
    f(i,0,64)
        if(b[i]==1&&c[i]==0){
            cout<<-1; ret;
        }
    cout<<ans;
    




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