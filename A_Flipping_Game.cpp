#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int n; 
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int start = 0;

    for(int u = 0; u < n; u++){
        if(a[u] == 0){
            start = u;
            break;
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++){

        vector<int> b = a;

        for(int j = i; j < n; j++){
            // if(b[j] == 0)
                b[j] ^= 1;
        }

        int one = 0;

        for(int k = 0; k < n; k++){
            if(b[k] == 1)
                one++;
        }

        ans = max(ans, one);
    }

    cout << ans << endl;
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