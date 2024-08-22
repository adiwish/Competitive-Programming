#include<bits/stdc++.h>
using namespace std;
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


vector<int> getPopularityOrder(vector<vector<int>> song_preference) {
    int n = song_preference.size();
    int m = song_preference[0].size();
    
    // Create a ranking matrix where rank[i][j] is the rank of song j for user i
    vector<vector<int>> rank(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rank[i][song_preference[i][j]] = j;
        }
    }

    // Initialize win counts
    vector<int> wins(m, 0);
    
    // Compare each pair of songs
    for (int x = 0; x < m; ++x) {
        for (int y = x + 1; y < m; ++y) {
            int count_x_over_y = 0;
            int count_y_over_x = 0;
            
            // Count preferences
            for (int i = 0; i < n; ++i) {
                if (rank[i][x] < rank[i][y]) {
                    count_x_over_y++;
                } else {
                    count_y_over_x++;
                }
            }
            
            // Determine who beats whom
            if (count_x_over_y > count_y_over_x) {
                wins[x]++;
            } else if (count_y_over_x > count_x_over_y) {
                wins[y]++;
            } else {
                if (x < y) {
                    wins[x]++;
                } else {
                    wins[y]++;
                }
            }
        }
    }

    // Create a list of song indices to sort based on their wins
    vector<int> order(m);
    for (int i = 0; i < m; ++i) {
        order[i] = i;
    }

    // Sort based on the number of wins, if equal then by song id
    sort(order.begin(), order.end(), [&wins](int a, int b) {
        if (wins[a] != wins[b]) {
            return wins[a] > wins[b];
        }
        return a < b;
    });

    return order;
}

int main()
{
    adiwish
    
    int n,m; cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>v[i][j];
    }
    cout<<getPopularityOrder(v);
}