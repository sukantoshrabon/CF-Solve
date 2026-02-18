#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int n; cin >> n;
    string a,b;
    cin >> a >> b;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a == b){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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