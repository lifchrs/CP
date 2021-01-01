#include <bits/stdc++.h>
using namespace std;
#define int long long
int P = 1000000007;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m,x; cin >> n >> m;
    multiset<int> u;
    for (int i=0; i<n; ++i) {cin >>  x; u.insert(x);}
    for (int i=0; i<m;++i) {
        cin >> x;
        if (!u.empty()) {
            auto it = u.upper_bound(x);
            if (it==u.begin()) {cout << -1 << '\n';}
            else {
                it--;
                cout << *it << '\n'; u.erase(it);
            }
        }
        else {cout << -1 << '\n';}
    }
}
