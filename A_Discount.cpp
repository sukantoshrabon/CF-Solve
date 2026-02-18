#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    double a,b;
    cin >> a >> b;
    cout <<((a-b)/a) * 100 << endl;
}

int main() {
    ios::sync_void solve() {
    int K, S;
    cin >> K >> S;
    int ans = 0;

    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            int z = S - x - y;
            if (0 <= z && z <= K)
                ans++;
        }
    }

    cout << ans << endl;
}with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

