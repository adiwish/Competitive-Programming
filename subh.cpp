#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > v;
vector<int> vis, par, tmp;
long long dfs(int node, int p = -1)
{
    vis[node] = 1;
    par[node] = p;
    tmp.push_back(node);
    for (auto i : v[node]) {
        if (vis[i] == 0) {
            long long z = dfs(i, node);
            if (z != -1) {
                return z;
            }
        }
        else if (vis[i] == 1) {
            long long sum = i;
            while (node != i) {
                sum += node;
                node = par[node];
            }
            if (node == i)
                return sum;
            return -1;
        }
    }
    return -1;
}

long long largestSumCycle(int N, vector<int> Edge)
{
    long long ans = -1;
    vis = vector<int>(N);
    v = vector<vector<int> >(N);
    par = vector<int>(N);

    for (int i = 0; i < N; i++) {
        if (Edge[i] != -1) {
            v[i].push_back(Edge[i]);
        }
    }

    for (int i = 0; i < N; i++) {
        if (!vis[i]) {
            ans = max(ans, dfs(i));
            for (auto j : tmp) {
                vis[j] = 2;
            }
            tmp.clear();
        }
    }

    return ans;
}

void solve(){
    int n;
    cin >> n;
    vector<int> edge(n);
    for(int i=0;i<n;i++)
        cin>>edge[i];
    cout<<largestSumCycle(n,edge);
}
int main()
{

    int t; cin>>t;
    while(t--)
        solve();
}
