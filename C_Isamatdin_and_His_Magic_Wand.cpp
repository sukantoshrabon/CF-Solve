#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    int odd = 0, even = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    if(odd >= 1 &&  even >= 1){
        sort(a.begin(), a.end());
    }
    for(auto i : a){
        cout << i << " ";
    } cout << endl;

}

int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}