#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        a[i] = s[i - 1] - '0';
    }
    int l = -1, r = -1;
    for (int i = 1; i <= n / 2; i++){
        if (a[i] != a[n - i + 1]){
            l = i;
            r = n - i + 1;
            break;
        }
    }
    if (l == -1){
        cout << "0" << endl;
        return;
    }

    // cout << r << ' ' << l << '\n';
    // cout << r - l << '\n';
    cout << r - l + 1 << endl;

    for (int i = l; i <= r; i++)
        cout << i << ' ';
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}