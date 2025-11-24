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

string vegName(int code) {
    if (code == -1) return "Waste";
    if (code == 1) return "Carrots";
    if (code == 2) return "Kiwis";
    return "Grapes";
}

int main() {
    FAST_IO
    
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    
    unordered_set<ll> wasteSet;
    vll wasteList;
    wasteSet.reserve((size_t)k * 2 + 10);
    
    for (int i = 0; i < k; i++) {
        int x, y; cin >> x >> y;
        ll pos = (ll)(x - 1) * m + (y - 1);
        wasteSet.insert(pos);
        wasteList.push_back(pos);
    }

    sort(all(wasteList));

    for (int qi = 0; qi < t; ++qi) {
        int x, y; cin >> x >> y;
        ll pos = (ll)(x - 1) * m + (y - 1);

        if (wasteSet.find(pos) != wasteSet.end()) {
            cout << vegName(-1) << "\n";
            continue;
        }
        
        ll cntBefore = lower_bound(all(wasteList), pos) - wasteList.begin();
        ll nonWasteIndex = pos - cntBefore;
        int code = (int)(nonWasteIndex % 3) + 1;
        cout << vegName(code) << "\n";
    }

    return 0;
}
