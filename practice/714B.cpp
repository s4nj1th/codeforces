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
    
    int n; cin >> n;
    int m = 0;
    htii freq;
    vi ks;
    
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        freq[a]++;

        if (freq[a] == 1) {
            m++;
            ks.pb(a);
        }
    }

    if (m <= 2) {
        cout << "YES\n";
        return 0;
    }

    sort(all(ks));
    if (m == 3) {
        int a = ks[0], b = ks[1], c = ks[2];
        if (b - a == c - b) cout << "YES\n";
        else cout << "NO\n";
        return 0;
    }

    cout << "NO\n";
    return 0;
}
