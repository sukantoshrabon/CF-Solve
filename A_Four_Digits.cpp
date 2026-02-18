git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     string s;     cin >> s;     int n = s.size();     for(int i=0; i<4-n; i++){         cout << "0";     }     cout << s<< endl; }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     // cin >> t;     while (t--) {         solve();     }     return 0; }
