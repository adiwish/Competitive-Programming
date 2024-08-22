#include<bits/stdc++.h>
using namespace std;

vector<long> maxMin(vector<string> operations, vector<int> x){
    vector<long> ans;
    multiset<int> st;
    int in=0;
    for(auto it:operations){
        if(it=="push") 
            st.insert(x[in]);
        else 
            st.erase(x[in]);
        long mul=0;
        if(st.size()!=0) 
            mul=(*st.begin())*(*st.rbegin());
        ans.push_back(mul);
        in++;
    }
    return ans;
}

int main(){
    int n; cin>>n;
    vector<string> operations(n);
    vector<int> x(n);
    for(int i=0;i<n;i++)
        cin>>operations[i];
    for(int i=0;i<n;i++)
        cin>>x[i];
    vector<long> ans=maxMin(operations,x);
    for(auto it: ans) cout<<it<<" ";

}