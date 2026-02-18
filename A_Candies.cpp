#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll ans = 0;
    for(int i=2; i<=29; i++){
        ll mod = (1 << i) - 1;
        if(n % mod == 0){
            ans = n / mod;
            cout << ans << endl;
            break;
        }
    }

}

int main() {
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