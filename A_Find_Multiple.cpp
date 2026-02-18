#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = ((a+c-1)/c)*c;

    if (x >= a && x <= b){
        cout << x << endl;
    } else {
        cout << "-1" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}