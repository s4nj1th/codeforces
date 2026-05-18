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

int getMex(set<int> &s) {
    int mex = 0;
    while (s.count(mex)) mex++;
    return mex;
}

void solve() {
    int n;
    cin >> n;

    vi a(2 * n);
    for (auto &x : a) cin >> x;

    int l = -1, r = -1;

    for (int i = 0; i < 2 * n; i++) {
        if (a[i] == 0) {
            if (l == -1) l = i;
            else r = i;
        }
    }

    int ans = 1;

    // case 1: palindrome between two zeroes
    {
        set<int> s;
        bool ok = true;

        for (int i = l, j = r; i <= j; i++, j--) {
            if (a[i] != a[j]) {
                ok = false;
                break;
            }
            s.insert(a[i]);
        }

        if (ok) {
            for (int i = l - 1, j = r + 1; i >= 0 && j < 2 * n; i--, j++) {
                if (a[i] != a[j]) break;
                s.insert(a[i]);
            }
            ans = max(ans, getMex(s));
        }
    }

    // case 2: centred at first zero
    {
        set<int> s;
        s.insert(0);

        for (int i = l - 1, j = l + 1; i >= 0 && j < 2 * n; i--, j++) {
            if (a[i] != a[j]) break;
            s.insert(a[i]);
        }

        ans = max(ans, getMex(s));
    }

    // case 3: centred at second zero
    {
        set<int> s;
        s.insert(0);

        for (int i = r - 1, j = r + 1; i >= 0 && j < 2 * n; i--, j++) {
            if (a[i] != a[j]) break;
            s.insert(a[i]);
        }

        ans = max(ans, getMex(s));
    }

    cout << ans << "\n";
}

int main() {
    FAST_IO
    
    int t; cin >> t;
    while (t--) solve();

    return 0;
}
