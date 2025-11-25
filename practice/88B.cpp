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
    
    int n, m, k; cin >> n >> m >> k;

    vector<string> keyboard(n);
    for (int i = 0; i < n; ++i) cin >> keyboard[i];

    vector<vpii> posKey(26);
    vector<pii> shiftPos;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char ch = keyboard[i][j];
            if (ch == 'S') shiftPos.pb({i, j});
            else posKey[ch - 'a'].pb({i, j});
        }
    }

    auto sqDist = [&](int r1, int c1, int r2, int c2) {
        ll dr = r1 - r2;
        ll dc = c1 - c2;
        return dr*dr + dc*dc;
    };

    vector<char> can(26, 0);
    if (!shiftPos.empty()) {
        ll maxDist = 1LL * k * k;
        for (int ch = 0; ch < 26; ++ch) {
            for (auto &p : posKey[ch]) {
                for (auto &spos : shiftPos) {
                    if (sqDist(p.first, p.second, spos.first, spos.second) <= maxDist) {
                        can[ch] = 1;
                        break;
                    }
                }
                if (can[ch]) break;
            }
        }
    }

    int q; string text; cin >> q >> text;
    int result = 0;

    for (int i = 0; i < q; ++i) {
        char c = text[i];
        if (islower(c)) {
            int idx = c - 'a';
            if (posKey[idx].empty()) { result = -1; break; }
        } else {
            char lower = tolower(c);
            int idx = lower - 'a';
            if (posKey[idx].empty() || shiftPos.empty()) { result = -1; break; }
            if (!can[idx]) ++result;
        }
    }

    cout << result;
    return 0;
}
