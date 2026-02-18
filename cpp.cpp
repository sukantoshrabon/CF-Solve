#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    cout << "Bitwise And: " <<(1 & 7) << endl;
    cout << "Bitwise Or: " <<(1 | 7) << endl;
    cout << "Bitwise Xor: " << (3 ^ 6) << endl;
    cout << "Bitwise Or: " << (~10) << endl;
    cout << endl;
    int y = 3;
    cin >> y;
    cout << "Left Shift of " << y << " is: " << (y << 2) << endl;
	cout << "RIght Shift of " << y << " is: " << (y >> 2) << endl;
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