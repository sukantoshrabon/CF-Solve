git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     int n; cin >> n;     if(n== 1){         cout << "1" << endl;         return;     }     if(n== 2){         cout << -1 << endl;         return;     }     vector<int>a;     for(int i=1; i<=n*n; i+=2){         a.push_back(i);     }     for(int i=2; i<=n*n; i+=2){         a.push_back(i);     }     int idx = 0;     for(int i=0; i<n; i++){         for(int j=0; j<n; j++){             cout << a[idx++] << ' ';         }         cout << endl;     } }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     cin >> t;     while (t--) {         solve();     }     return 0; }
