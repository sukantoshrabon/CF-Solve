git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     string s;     cin>>s;     int n;     n= s.size();     vector<int> pref(n + 1, 0);     for (int i = 1; i < n; i++) o{         pref[i + 1] = pref[i] + (s[i] == s[i - 1]);     }      int m;      cin >> m;     while (m--) {         int l, r;         cin >> l >> r;         cout << pref[r] - pref[l] << '\n';     }  }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     // cin >> t;     while (t--) {         solve();     }     return 0; }
