#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int n,k; cin >> n >> k;
    vector<int>a(n),b(n);
    for(int &i:a) cin >> i;
    for(int &i:b) cin >> i;
    int s1=0,s2=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    bool flag = true;
    for(int i=0; i<n; i++){
        if(a[i] % k != b[i] %k){
            flag = false;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] > b[i]){
            flag = false;
            break;
        }
    }
    if(flag) {
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