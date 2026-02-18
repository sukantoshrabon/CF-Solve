git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     int n; cin >> n;      vector<int> a(n+1);     int ans = 0;     for(int i=1; i<=n; i++){         cin >> a[i];         if(a[i] > i){         int diff = abs(i - a[i]);         ans = max(ans,diff);         }              }     cout << ans << endl; }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     cin >> t;     while (t--) {         solve();     }     return 0; }
