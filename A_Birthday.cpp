#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    ll n,m,k,l;
    cin >> n >> m >> k >>l;
    ll x = (k + l + m - 1) / m;
     if((x * m) > n){
        cout << -1 << endl;
     } else {
        cout << x << endl;
     }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}