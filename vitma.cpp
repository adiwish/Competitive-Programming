#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

pair<vector<int>, vector<int>> divideNumbers(int n) {
    vector<int> group1, group2;
    int sum1 = 0, sum2 = 0;
    for (int i = n; i >= 1; --i) {
        if (sum1 <= sum2) {
            group1.push_back(i);
            sum1 += i;
        } else {
            group2.push_back(i);
            sum2 += i;
        }
    }

    return make_pair(group1, group2);
}
vector<int> solve(int n){
    auto groups = divideNumbers(n);

    int sum1 = accumulate(groups.first.begin(), groups.first.end(), 0);
    int sum2 = accumulate(groups.second.begin(), groups.second.end(), 0);

    vector<int> ans;
    if(groups.first.size()>=groups.second.size()){
        for (int num : groups.first) 
            ans.push_back(num);
        for (int num : groups.second) 
            ans.push_back(num); 
    }
    else{
        for (int num : groups.second) 
            ans.push_back(num); 
        for (int num : groups.first) 
            ans.push_back(num);
    }
    
    return ans;
}
int main() {
    int n; cin >> n;
    vector<int> ans=solve(n);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    

    return 0;
}
