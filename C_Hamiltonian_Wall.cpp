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
    char a[2][n];
    char b[2][n];
    for(int i=0;i<n;i++){
        cin>>a[0][i];
        b[0][i]=a[0][i];
    }
    for(int i=0;i<n;i++){
        cin>>a[1][i];
        b[1][i]=a[1][i];
    }

    // for(int i=0;i<=1;i++){
    //     for(int j=0;j<n;j++)
    //         cout<<a[i][j];
    //     cout<<endl;
    // }
    // for(int i=0;i<=1;i++){
    //     for(int j=0;j<n;j++)
    //         cout<<b[i][j];
    //     cout<<endl;
    // }

    int x=0,y=0;
    for(int i=0;i<n;i++) 
        if(a[0][i]=='B'){
            y=i; break;
        }
    while(1){
        if(y>=n||a[x][y]=='W') bk;
        if(x==0){
            a[x][y]='0';
            if(a[1][y]=='B'){
                a[1][y]='0';
                x=1; y++;
            }
            else y++;
        }
        else{
            a[x][y]='0';
            if(a[0][y]=='B'){
                a[0][y]='0';
                x=0; y++;
            }
            else y++;
        }
    }
    int first=true,second=true;
    for(int i=0;i<n;i++){
        if(a[0][i]=='B'||a[1][i]=='B'){
            first=false; bk;
        }
    }
    x=1;
    for(int i=0;i<n;i++) 
        if(b[1][i]=='B'){
            y=i; break;
        }
    while(1){
        if(y>=n||b[x][y]=='W') bk;
        if(x==0){
            b[x][y]='0';
            if(b[1][y]=='B'){
                b[1][y]='0';
                x=1; y++;
            }
            else y++;
        }
        else{
            b[x][y]='0';
            if(b[0][y]=='B'){
                b[0][y]='0';
                x=0; y++;
            }
            else y++;
        }
    }
    for(int i=0;i<n;i++){
        if(b[0][i]=='B'||b[1][i]=='B'){
            second=false; bk;
        }
    }

    // for(int i=0;i<=1;i++){
    //     for(int j=0;j<n;j++)
    //         cout<<a[i][j];
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i=0;i<=1;i++){
    //     for(int j=0;j<n;j++)
    //         cout<<b[i][j];
    //     cout<<endl;
    // }

    if(first||second)
        cout<<"YES";
    else cout<<"NO";


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