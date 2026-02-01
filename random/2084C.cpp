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

void solve() {
    int n; cin >> n;

    vi a(n);
    vi b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    vector<int> pos(n + 1, -1);
    for (int i = 0; i < n; ++i) pos[a[i]] = i;

    vector<pair<int,int>> ops;

    auto work = [&](int x, int y) {
        if (x == y) return;
        ops.emplace_back(x + 1, y + 1);
        swap(a[x], a[y]);
        pos[a[x]] = x;
        pos[a[y]] = y;
        swap(b[x], b[y]);
    };

    int x = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            if (n % 2 == 0 || x != -1) {
                cout << "-1\n";
                return;
            }
            x = i;
        } else {
            int j = pos[b[i]];
            if (j < 0 || b[j] != a[i]) {
                cout << "-1\n";
                return;
            }
        }
    }

    if (n % 2 == 1) {
        work(x, n / 2);
    }

    for (int i = 0; i < n / 2; ++i) {
        work(pos[b[i]], n - i - 1);
    }

    cout << ops.size() << '\n';
    for (auto &pr : ops) cout << pr.first << ' ' << pr.second << '\n';
}

int main() {
    FAST_IO
    
    int t; cin >> t;
    while (t--) solve();

    return 0;
}
