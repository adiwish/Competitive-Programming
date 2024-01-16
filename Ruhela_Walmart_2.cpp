#include <bits/stdc++.h>
using namespace std;
int longestIncreasingSubsequence(int arr[], int n) {
    vector<int> temp;
    temp.push_back(arr[0]);

    int len = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > temp.back()) {
            temp.push_back(arr[i]);
            len++;
        } else {
            int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
            temp[ind] = arr[i];
        }
    }

    return len;
}
int modInverse(int A, int M)
{
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}
int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    

    int ans=longestIncreasingSubsequence(a, n);
    ans=modInverse(ans,1000007);
    cout<<ans;

    return 0;
}
