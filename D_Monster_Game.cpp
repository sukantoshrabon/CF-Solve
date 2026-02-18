#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());

    for(int i = 1; i < n; i++){
        b[i] += b[i-1];
    }

    ll ans = 0;

    for(int i = 0; i < n; i++){
        ll x = a[i];
        ll sword = n - i;
        ll lvl = upper_bound(b.begin(), b.end(), sword) - b.begin();
        ans = max(ans, x * lvl);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}