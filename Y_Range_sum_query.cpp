git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     int n, q;     cin >> n >> q;     vector<ll> a(n + 1), pref(n + 1, 0);      for (int i = 1; i <= n; i++) {         cin >> a[i];         pref[i] = pref[i - 1] + a[i];     }      while (q--) {         int l, r;         cin >> l >> r;         cout << pref[r] - pref[l - 1] << endl;     } }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     // cin >> t;     while (t--) {         solve();     }     return 0; }
