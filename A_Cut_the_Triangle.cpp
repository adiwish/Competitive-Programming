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
bool checkRightAngled(int X1, int Y1,
                      int X2, int Y2,
                      int X3, int Y3)
{
    // Calculate the sides
    int A = (int)pow((X2 - X1), 2)
            + (int)pow((Y2 - Y1), 2);
 
    int B = (int)pow((X3 - X2), 2)
            + (int)pow((Y3 - Y2), 2);
 
    int C = (int)pow((X3 - X1), 2)
            + (int)pow((Y3 - Y1), 2);
 
    // Check Pythagoras Formula
    if ((A > 0 and B > 0 and C > 0)
        and (A == (B + C) or B == (A + C)
             or C == (A + B)))
        return true;
 
    else
        return false;
}
void code(){
    int x1,y1,x2,y2,x3,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int y=0;
    if(y1==y2||y1==y3||y2==y3) y=1;
    int x=0;
    if(x1==x2||x1==x3||x2==x3) x=1;
    if(x==1&&y==1) cout<<"NO";
    else cout<<"YES";

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