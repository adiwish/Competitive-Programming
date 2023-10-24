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
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
        f(j,0,m)
            cin>>a[i][j];
    //Storing frequency of one in every row;
    int fre[n]={0};
    int cnt=0;
    f(i,0,n)
        f(j,0,m)
            if(a[i][j]==1){
                fre[i]++;
                cnt++;
            }
    if(cnt%n!=0){
        cout<<-1<<endl; ret;
    }
    // f(j,0,m){
    //     int temp=0;
    //     f(i,0,n)
    //         if(a[i][j]==1) temp++;
    // }
    // cout<<"cnt/n = "<<cnt/n<<endl;
    // cout<<"Frequency"<<endl;
    // for(int i=0;i<n;i++)
    //     cout<<fre[i]<<" ";
    // cout<<endl;
    //Storing the Donor cells and receiver cells
    unordered_map<int,deque<int>> don;
    vector<pair<int,int>> rec;
    f(i,0,n)
        f(j,0,m){
            if(fre[i]==cnt/n) continue;
            else if(fre[i]>cnt/n&&a[i][j]==1) don[j].push_back(i);
            else if(fre[i]<cnt/n&&a[i][j]==0) rec.push_back({j,i});
        }
    // cout<<"Donor"<<endl;
    // for(auto it=don.begin();it!=don.end();it++){
    //     cout<<it->first<<"  ---  ";
    //     for(int i=0;i<it->second.size();i++)
    //         cout<<it->second[i]<<" ";
    //     cout<<endl;
    // }
    // cout<<"Receivers"<<endl;
    // for(int i=0;i<rec.size();i++)
    //     cout<<rec[i].second<<" "<<rec[i].first<<endl;
    
    // Matching Donor and Receiver
    vector<pair<pair<int,int>,int>> ans;
    //cout<<"poping";
    for(int i=0;i<rec.size();i++){
        pair<int,int> it=rec[i];
        while(i!=rec.size()&&fre[it.second]>=cnt/n){
            //cout<<"yes";
            //cout<<it.second<<" ";
            i++;
            if(i>=rec.size()) bk;
            it=rec[i];
        }
        if(i>=rec.size()) bk;
        it=rec[i];
        int j=it.first;
        while(don[j].size()!=0&&fre[don[j][0]]<=cnt/n){
            don[j].pop_front();
        }
        if(don.find(j)==don.end()||don[j].size()==0){
            //
            continue;
        }
        else{
            ans.push_back({{it.second,don[j][0]},j});
            fre[don[j][0]]--;
            fre[it.second]++;
            don[j].pop_front();
            
        }
    }
    // Printing Answer
    //cout<<"Answer"<<endl;
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i].first.first+1<<" "<<ans[i].first.second+1<<" "<<ans[i].second+1<<endl;
    



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