#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> primecnt(n + 1, 0);
    for (int i = 2; i <= n; ++i){
        if (primecnt[i] == 0){
            for (int j = i; j <= n; j += i){
                primecnt[j]++;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i){
        if (primecnt[i] == 2){
            ans++;
        }
    }
    cout << ans << endl;

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