#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;
void solve(){
    int n, k, q;
    cin >> n >> k >> q;
    const int N = 2e5 + 5;
    vector<int> a(N, 0), b(N, 0);
    for (int i = 1; i <= n; i++){
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }

    for (int i = 1; i < N; i++) a[i] += a[i - 1];
    for (int i = 1; i < N; i++) b[i] = (a[i] >= k);
    for (int i = 1; i < N; i++) b[i] += b[i-1];

    while (q--){
        int l, r;
        cin >> l >> r;
        cout << b[r] - b[l - 1] << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}