#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    ll n;
    cin>>n;
    if(n%2 != 0 || n<4){
        cout << "-1" << endl;
        return;
    }
    if(n==4){
        cout << "1 1" << endl;
        return;
    }
    ll minn = n/4;
    ll maxx = (n+5) / 6;
    cout << maxx << " " << minn << endl; 
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