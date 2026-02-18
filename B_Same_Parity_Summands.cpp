git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     int n,k; cin >> n >> k;     int p = n-(k-1);     int q = n-2*(k-1);     if(p > 0 && p % 2 != 0){         cout << "YES" << endl;         for(int i=0; i<k-1; i++) cout << "1 ";         cout << p << endl;     }else if(q > 0 && q % 2 == 0){         cout << "YES" << endl;         for(int i=0; i<k-1; i++) cout << "2 ";         cout << q << endl;     } else {         cout << "NO" << endl;     }  }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     int t = 1;     cin >> t;     while (t--) {         solve();     }     return 0; }
