git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n'  void solve() {     int n, q;     cin >> n >> q;     vector<int> a(n);     for (int &i : a) cin >> i;      while (q--) {         int t;         cin >> t;          int ans = -1;         for (int i = 0; i < (int)a.size(); i++) {             if (a[i] == t) {                 ans = i + 1;                 break;             }         }          cout << ans << " ";          int idx = a[ans - 1];         a.erase(a.begin() + (ans - 1));         a.insert(a.begin(), idx);     }     cout << endl; }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);      solve();     return 0; }
