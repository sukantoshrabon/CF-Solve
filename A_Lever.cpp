#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;
    int steps = 1, mx = 0;

    for (int i = 0; i < n; i++){
        if (a[i] > b[i]){
            steps += (a[i] - b[i]);
        }
    }
    cout << steps << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}