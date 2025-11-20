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
    vi ans = a;
    if (a[0] == -1 && a[n-1] == -1) {
        a[0] = 0;
        a[n-1] = 0;
    } else if (a[0] == -1) {
        a[0] = a[n-1];
    } else if (a[n-1] == -1) {
        a[n-1] = a[0];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == -1) a[i] = 0;
    }

    int answer = abs(a[n-1] - a[0]);
    cout << answer << '\n';
    for (int i = 0; i < n; i++) {
        if (i) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
}

int main() {
    FAST_IO
    
    int t; cin >> t;
    while (t--) solve();

    return 0;
}
