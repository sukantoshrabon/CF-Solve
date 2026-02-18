#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int n; cin >> n;
    int a[n];
    map<int,vector<int>>mp;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    for(auto it : mp){
        if(it.second.size() >= 2 && it.second.back() - it.second.front() >= 2){
            cout << "YES" << endl;
            return;
        }
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