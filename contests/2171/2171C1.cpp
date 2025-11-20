#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
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
    for (int i = 0; i < n; i++) cin >> a[i];

    vi m(n);
    for (int i = 0; i < n; i++) cin >> m[i];

    int xa = a[0], xm = m[0];;
    for (int i = 1; i < n; i++) {
        xa ^= a[i];
        xm ^= m[i];
    }

    if (xa == xm) {
        cout << "Tie\n";
        return;
    }

    int last = -1;
    for (int i = n-1; i >= 0; --i) {
        if (a[i] != m[i]) { last = i; break; }
    }

    if (last == -1) {
        cout << "Tie\n";
        return;
    }

    if (last % 2 == 0) cout << "Ajisai\n";
    else cout << "Mai\n";
}

int main() {
    FAST_IO
    
    int t; cin >> t;
    while (t--) solve();

    return 0;
}
