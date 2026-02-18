git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     int n;     cin >> n;     int a[n+1];     for(int i=1; i<=n; i++){         cin >> a[i];     }     int ans = 0;     for(int i=1; i<=n-1; i++){         for(int j=i; j<=n; j++){             if((a[i] * a[j]) == (i + j))             ans++;         }     }     cout << ans << endl; }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     cin >> t;     while (t--) {         solve();     }     return 0; }
