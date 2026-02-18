#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
      int n; cin >> n;
      vector<int>a(n);
      for(auto &i : a) cin >> i;
      int ans = 0;
      for(int i=0; i<n-1; i++){
        int x = a[i] * a[i+1];
        ans = max(ans , x);
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// xor 
// a b c output
// 0 0 0
// 1 0 1
// 0 1 1
// 1 1 1 

// 4
// 100 ^ 001

// 101
// 011
// 010
// 001
// 111


