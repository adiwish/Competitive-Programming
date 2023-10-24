#include <iostream>
#include <vector>
#include <string>
using namespace std;

void lazyUpdate(vector<int>& buttons, vector<int>& lazy, int i) {
    if (lazy[i]) {
        buttons[i] ^= 1;
        if (i * 2 + 1 < lazy.size()) {
            lazy[i * 2 + 1] ^= 1;
            lazy[i * 2 + 2] ^= 1;
        }
        lazy[i] = 0;
    }
}

void updateRange(vector<int>& buttons, vector<int>& lazy, int i, int l, int r, int x, int y) {
    lazyUpdate(buttons, lazy, i);

    if (l >= x && r <= y) {
        lazy[i] ^= 1;
        lazyUpdate(buttons, lazy, i);
        return;
    }
    
    if (l > y || r < x) return;
    
    int mid = (l + r) / 2;
    updateRange(buttons, lazy, i * 2 + 1, l, mid, x, y);
    updateRange(buttons, lazy, i * 2 + 2, mid + 1, r, x, y);
    
    // Not necessary to merge values in this specific problem
}

int query(vector<int>& buttons, vector<int>& lazy, int i, int l, int r, int x) {
    lazyUpdate(buttons, lazy, i);
    
    if (l == r) return buttons[i];
    
    int mid = (l + r) / 2;
    
    if (x <= mid) return query(buttons, lazy, i * 2 + 1, l, mid, x);
    else return query(buttons, lazy, i * 2 + 2, mid + 1, r, x);
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int N, Q;
        string S;
        cin >> N >> S >> Q;

        vector<int> buttons(4 * N, 0), lazy(4 * N, 0);
        for (int i = 0; i < N; ++i) {
            buttons[N - 1 + i] = (S[i] == '1');
        }

        for (int q = 0; q < Q; ++q) {
            int B;
            cin >> B;
            for (int i = B - 1; i < N; i += B) {
                updateRange(buttons, lazy, 0, 0, N - 1, i, i);
            }
        }
        
        int minPresses = 0;
        for (int i = N - 1; i >= 0; --i) {
            if (query(buttons, lazy, 0, 0, N - 1, i)) {
                ++minPresses;
                for (int j = i; j < N; j += (i + 1)) {
                    updateRange(buttons, lazy, 0, 0, N - 1, j, j);
                }
            }
        }

        cout << "Case #" << t << ": " << minPresses << endl;
    }
    return 0;
}
