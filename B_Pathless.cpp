git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve(){     int n, k, tmp;     cin >> n >> k;     vector<int> a(3, 0);     for(int i = 0; i < n; ++i){         cin >> tmp;         ++a[tmp];     }      if (k == a[1] + 2 * a[2] || k >= a[1] + 2 * a[2] + 2) {         cout << -1 << endl;         return;     }      for (int i = 0; i < a[0]; ++i) cout << 0 << ' ';     for (int i = 0; i < a[2]; ++i) cout << 2 << ' ';     for (int i = 0; i < a[1]; ++i) cout << 1 << ' ';     cout << endl; } int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     cin >> t;     while (t--) {         solve();     }     return 0; }
