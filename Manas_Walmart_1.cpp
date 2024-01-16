#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[101]={0};
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a[x]++;
    }
    int ans=0;
    for(int i=1;i<=100;i++){
        ans+=(a[i]*(a[i]-1))/2;
    }
    cout<<ans;
}