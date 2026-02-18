git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     int a,b,c;     cin >> a >> b >> c;     for (int i = 0; i <= c / a; i++) {         int rem = c - a * i;         if (rem % b == 0) {             cout << "Yes" << endl;             return;         }     }     cout << "No" << endl; }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     // cin >> t;     while (t--) {         solve();     }     return 0; }
