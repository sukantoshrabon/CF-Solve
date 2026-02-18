#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int x = b - (c - b);
    if(x >= a && x % a == 0 && x != 0) {
        cout << "YES" << endl;
        return;
    }
    int y = a + (c - a)/2;
    if(y >= b && (c-a)%2 == 0 && y % b == 0 && y != 0) {
        cout << "YES" << endl;
        return;
    }
    int z = a + 2*(b - a);
    if(z >= c && z % c == 0 && z != 0) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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