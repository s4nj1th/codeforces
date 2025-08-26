#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define htii unordered_map<int, int>
#define htci unordered_map<char, int>
#define pii pair<int, int>
#define vpii vector<pii>

int main() {
    ll n;
    int m;
    cin >> n >> m;

    vpii ab(m);
    for (int i = 0; i < m; i++) {
        cin >> ab[i].first >> ab[i].second;
    }

    sort(ab.begin(), ab.end(), [](auto &x, auto &y) {
        return x.second > y.second;
    });

    ll ans = 0;
    for (int i = 0; i < m && n > 0; i++) {
        ll take = min<ll>(ab[i].first, n);
        ans += take * ab[i].second;
        n -= take;
    }

    cout << ans << "\n";
    return 0;
}