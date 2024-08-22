#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int getNumPairs(vector<int> arr, int l,int r)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
 
    int right = n - 1, count = 0;
 
    while (right > 0) {
 
        auto it1 = lower_bound(arr.begin(), arr.end(),l - arr[right]);
        int start = it1 - arr.begin();

        auto it2 = upper_bound(arr.begin(), arr.end(),r - arr[right]);
        --it2;
        int end = it2 - arr.begin();

        end = min(end, right - 1);
        if (end - start >= 0) {
            count += (end - start + 1);
        }
 
        right--;
    }
    return count;
}

int32_t main(){

    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int l,r; cin>>l>>r;
    cout<<getNumPairs(v,l,r);
}