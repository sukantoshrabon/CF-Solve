#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
      int n; cin >> n;
      int a[n];
      for(int i=0; i<n; i++){
        cin >> a[i];
      }
      int x = a[0];
      for(int i=1; i<n; i++){
        x ^= a[i];
        // cout << x;
      }
      if(x == 0){
        cout << 0 << endl;
      } else if(n % 2 == 0){
        cout << "-1" << endl;
      } else {
        cout << x << endl;
      }
      
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}