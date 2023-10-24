#include<bits/stdc++.h>
#include <iostream>
using namespace std;
// #define int long long
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
    int a[26]={0};
    f(i,0,26) a[i]=-1;
    unordered_map<int,vector<int>> mp;
    vector<string> v(n);
    f(i,0,n) cin>>v[i];
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            for(int k=0;k<v[i].length()&&k<v[j].length();k++){
                if(v[i][k]==v[j][k]){ 
                    if(k==v[j].length()-1&&v[i].length()>v[j].length()){
                        cout<<"Impossible"; ret;
                    }
                    continue;
                }
                if(a[v[j][k]-'a']==-1) a[v[j][k]-'a']=1;
                else a[v[j][k]-'a']++;
                mp[v[i][k]-'a'].push_back(v[j][k]-'a');
                a[v[i][k]-'a']=max(a[v[i][k]-'a'],0);
                break;
            }
        }
    }
    // for(auto it:mp){
    //     if(it.second.size()==0) continue;
    //     cout<<char(it.first+'a')<<"  --  ";
    //     for(auto i:it.second) cout<<char(i+'a')<<" ";
    //     cout<<endl;
    // }
    // for(int i=0;i<26;i++) if(a[i]!=-1) cout<<a[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<26;i++) if(a[i]!=-1) cout<<char('a'+i)<<" ";
    // cout<<endl;
    queue<int> q;
    sg ans="";
    for(int i=0;i<26;i++)
        if(a[i]==0)
            q.push(i);
    while(!q.empty()){
        int s=q.size();
        sg temp="";
        while(s--){
            int node=q.front();
            q.pop();
            temp.pb(node+'a');
            for(auto it:mp[node]){
                a[it]--;
                if(a[it]==0) q.push(it);
            }
        }
        sort(temp.begin(),temp.end());
        ans+=temp;
        // cout<<ans<<endl;
    }
    // cout<<endl;
    // for(int i=0;i<26;i++) if(a[i]!=-1) cout<<a[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<26;i++) if(a[i]!=-1) cout<<char('a'+i)<<" ";
    // cout<<endl;
    for(int i=0;i<26;i++)
        if(a[i]!=0&&a[i]!=-1){
            cout<<"Impossible"; ret;
        }
    // for(int i=0;i<26;i++) cout<<a[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<26;i++) cout<<char('a'+i)<<" ";
    // cout<<endl;
    sg ult="";
    unordered_map<char,int> pre;
    for(auto it:ans)
        pre[it]=1;
    sg temp="";
    for(char i='a';i<='z';i++)
        if(!(pre[i])) temp.pb(i);
    int i=0,in=0;
    while(in<temp.length()&&i<ans.length()){
        if(ans[i]<temp[in]){
            ult.pb(ans[i]); i++;
        }
        else{
            ult.pb(temp[in]); in++;
        }
    }
    for( ;i<ans.length();i++)
        ult.pb(ans[i]);
    for( ;in<temp.length();in++)
        ult.pb(temp[in]);

    cout<<ult;

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