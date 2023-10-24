#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define jack420 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
        jack420
    #define int long long

    int t;
    cin>>t;
    while(t--)
    {
        int n,m; cin>>m;
        n=m;
        int matrix[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cin>>matrix[i][j];
        }   
        vector<int> v;
        int i=0;
        while(i<=n-1){
            for(int j=i;j<n;j++)
                v.push_back(matrix[i][j]);  
            v.pop_back();
            
            for(int j=i;j<n;j++)
                v.push_back(matrix[j][n-1]);
            v.pop_back();
            for(int j=n-i;j>=i;j--)
                v.push_back(matrix[n-1][j]);
            v.pop_back();
            for(int j=n-i-1;j>=i;j--)
                v.push_back(matrix[j][i-1]);
            
            for(int j=0;j<v.size();j++) cout<<v[i]<<" ";
            cout<<"\n";
            // v.pop_back();
            // reverse(v.begin(),v.end());
            // for(int j=0;j<v.size();j++) cout<<v[i]<<" ";
            // cout<<"\n"<<v.size()<<"\n";
            // for(int j=i;j<n;j++){
            //     matrix[j][n-1]=v[v.size()-1];
            //     if(j!=n-1)
            //     v.pop_back();
            // }
            // for(int j=n-1;j>=i;j--){
            //     matrix[n-1][j]=v[v.size()-1];
            //     if(j!=i)
            //     v.pop_back();
            // }
            // for(int j=n-1;j>=i;j--){
            //     matrix[j][i]=v[v.size()-1];
            //     if(j!=i)
            //     v.pop_back();
            // }
            // for(int j=i;j<n;j++){
            //     matrix[i][j]=v[v.size()-1];
            //     if(j!=n-1)
            //         v.pop_back();
            // }
            v.clear();
            i++;
            n=n-2;
        }
    }
}