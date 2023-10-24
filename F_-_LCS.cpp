#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define int long long

int mod(int n){
    return n % 1000000007;
}

bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
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

int32_t main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
        adiwish

    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size(),n2=s2.size();
    vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
    for(int i=n1-1;i>=0;i--){
        for(int j=n2-1;j>=0;j--){
            if(s1[i]==s2[j]){
                dp[i][j]=dp[i+1][j+1]+1;
            } else {
                if(dp[i+1][j]>dp[i][j+1]) dp[i][j]=dp[i+1][j];
                else dp[i][j]=dp[i][j+1];
            }
        }
    }
    string ans="";
    int i=0,j=0;
    while(i<n1&&j<n2){
        if(dp[i][j]==dp[i+1][j]) i++;
        else if(dp[i][j]==dp[i][j+1]) j++;
        else{
            ans.push_back(s1[i]);
            i++;j++;
        }
    }
    cout<<ans;
}