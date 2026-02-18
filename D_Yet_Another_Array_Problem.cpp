#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool bs(int a[], int n, int i) {
    for (int i = 0; i < n; i++) {
        if (__gcd(a[i], i) == 1) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int res = -1;
    for (int i = 2; i <= 1000000; i++) {
        if (bs(a, n, i)) {
            res = i;
            break;
        }
    }
    cout << res << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}