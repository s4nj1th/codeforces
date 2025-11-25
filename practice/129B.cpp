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

    int n, m; cin >> n >> m;
    
    vvi adjMatrix(n, vi(n, 0));

    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adjMatrix[u-1][v-1] = 1;
        adjMatrix[v-1][u-1] = 1;
    }

    bool flag = true;
    int ans = 0;
    while (true) {
        vi deg(n, 0);
        for (int i = 0; i < n; ++i) {
            int d = 0;
            for (int j = 0; j < n; ++j) d += adjMatrix[i][j];
            deg[i] = d;
        }

        vi toRemove;
        for (int i = 0; i < n; ++i) if (deg[i] == 1) toRemove.pb(i);

        if (toRemove.empty()) break;

        for (int v : toRemove) {
            for (int j = 0; j < n; ++j) {
                adjMatrix[v][j] = 0;
                adjMatrix[j][v] = 0;
            }
        }

        ans += 1;
    }

    cout << ans << "\n";
    
    return 0;
}
