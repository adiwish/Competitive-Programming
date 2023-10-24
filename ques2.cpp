#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long


int32_t main(){
    
    int n; cin>>n;
    int a[1001]={0};
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a[x]++;
    }
    vector<int> fre;
    for(int i=1;i<=1000;i++) 
        if(a[i]!=0)
            fre.push_back(a[i]);
    n=fre.size();
    sort(fre.begin(),fre.end());
    

    int i=0,ans=0,length=n-1,use=0;
    while(i<n-1){
        ans+=(fre[i]-use)*length;
        int j=i+1;
        while(j<n&&fre[i]==fre[j]){
            length--;
            j++;
        }
        length--;
        use=fre[i];
        i=j;
        
    }
    cout<<ans;
}