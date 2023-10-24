#include <bits/stdc++.h>
using namespace std;
const int mxN = 110;
int x[mxN], y[mxN];
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }
    double ans = 0;
    int x1, x2, y1, y2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            x1 = x[i], y1 = y[i];
            x2 = x[j], y2 = y[j];
            double dis = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
            ans = max(ans, dis);
        }
    }
    cout << fixed << setprecision(15) << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}