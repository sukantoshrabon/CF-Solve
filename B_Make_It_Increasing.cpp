git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     int n; cin >> n;     vector<ll>a(n);     for (ll &i : a) cin >> i;     ll steps = 0;      for (int i = n - 2; i >= 0; i--) {         while (a[i] >= a[i + 1] && a[i] > 0) {             a[i] /= 2;             steps++;         }         if (a[i] >= a[i + 1]) {             cout << -1 << endl;             return;         }     }      cout << steps << endl; }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     cin >> t;     while (t--) {         solve();     }     return 0; }
