#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
using ll = long long;

void solve() {
    int n; cin >> n;
    int a[n];
    map<int,int>mp;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    int dif = 0, ways = 0;
    if(mp.size() == 1){
        dif = 0;
        int freq = mp.begin()->second;
        ways = freq * (freq - 1) / 2;
    }
    else{
        auto minval = mp.begin();
        auto maxval = prev(mp.end());

        dif = maxval->first - minval->first;
        ways = maxval->second * minval->second;
    }
    cout << dif << ' ' << ways << endl;
   

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}