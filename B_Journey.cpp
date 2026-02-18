git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     ll n, x, y, z;     cin >> n >> x >> y >> z;     ll sum = x + y + z;     ll d = (n / sum) * 3;     ll rem = n % sum;     if (rem == 0) {         cout << d << endl;     } else if (rem <= x) {         cout << d + 1 << endl;     } else if (rem <= x + y) {         cout << d + 2 << endl;     } else {         cout << d + 3 << endl;     } } int main() {     ios::sync_with_stdio(false);     cin.tie(0); cout.tie(0);     int t = 1;     cin >> t;     while (t--) {         solve();     }     return 0; }
