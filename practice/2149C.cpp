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

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#ifdef DEBUG
    #define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
    #define dbg(x)
#endif

void solve() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    int mex = 0;
    unordered_map<int, int> ht;

    vi a(n);
    for (int &x : a) {
        cin >> x;
        ht[x]++;
    }

    int cost = 0, rep = ht[k];
    for (int i = 0; i < k; i++) {
        if (!ht.count(i)) {
            cost++;
        }
    }

    cout << max(cost, rep) << endl;
}

int main() {
    FAST_IO
    
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
