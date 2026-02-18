#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    map<char,int>mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    bool flag = true;
    for(auto it : mp){
        if(it.second % n != 0){
            flag = false;
            break;
        }
    }
    if(!flag){
        cout << -1 << endl;
        return;
    }
    string len = "";
    for(auto it : mp){
        len += string(it.second / n, it.first);
    }
    string ans = "";
    for(int i=0 ; i<n; i++){
        ans += len;
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