#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int t, k, T;
    cin >> t >> k >> T;
    int nxtfree = 0;
    int ans = 0;
    for (int i = 0; i <= T; i += t) {
        if (i >= nxtfree) {
            ans++;
            nxtfree = i + k;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}