git add .
git commit -m "initial commit"
git push -u origin main
#include <bits/stdc++.h> using namespace std; #define endl '\n' using ll = long long;  void solve() {     int n;     cin >> n;     map<int,int> mp;     for(int i=0; i<n; i++){         int x;         cin>>x;         mp[x]++;     }     vector<pair<int,int>> mpr;     for(auto &p : mp){         mpr.push_back({p.second, p.first});     }     sort(mpr.rbegin(), mpr.rend());     int s = mpr.size();     int ans = 0;     for(int i = 0; i < s; i++){         ans = max(ans, (i+1) * mpr[i].first);     }     cout << ans << endl; }  int main() {     ios::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);      int t = 1;     cin >> t;     while (t--) {         solve();     }     return 0; }
