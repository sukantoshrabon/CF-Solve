
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &i:a) cin>>i;
    ll ans = 0;
    sort(a.begin(),a.end());

    for(int i=1; i<n; i++){
        if(a[0] < a[i]){
            ans += a[i] - a[0];
        }
    }
    cout << ans << endl;
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