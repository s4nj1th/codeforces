#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define htii unordered_map<int, int>
#define htci unordered_map<char, int>
#define htil unordered_map<int, ll>
#define htli unordered_map<ll, int>
#define htcl unordered_map<char, ll>

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#ifdef DEBUG
    #define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
    #define dbg(x)
#endif

int main() {
    FAST_IO
    
    int p, q, l, r; cin >> p >> q >> l >> r;
    vpii z(p), x(q);
    for (int i = 0; i < p; ++i) cin >> z[i].first >> z[i].second;
    for (int i = 0; i < q; ++i) cin >> x[i].first >> x[i].second;

    int cnt = 0;
    for (int t = l; t <= r; ++t) {
        bool ok = false;
        for (int i = 0; i < p && !ok; ++i) {
            for (int j = 0; j < q; ++j) {
                int a = z[i].first, b = z[i].second;
                int c = x[j].first + t, d = x[j].second + t;
                if (!(b < c || d < a)) { ok = true; break; }
            }
        }
        if (ok) ++cnt;
    }

    cout << cnt << '\n';
    return 0;
}
