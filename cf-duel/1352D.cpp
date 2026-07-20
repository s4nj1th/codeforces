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
    int n;
    cin >> n;

    vi arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l = 0, r = n - 1;
    int a = 0, b = 0;
    int aTot = 0, bTot = 0;
    int steps = 0;

    a = arr[l];
    aTot += a;
    l++;
    steps++;

    while (l <= r) {
        b = 0;
        while (l <= r && b <= a) {
            b += arr[r];
            bTot += arr[r];
            r--;
        }
        steps++;

        if (l > r) break;

        a = 0;
        while (l <= r && a <= b) {
            a += arr[l];
            aTot += arr[l];
            l++;
        }
        steps++;
    }

    cout << steps << " " << aTot << " " << bTot << "\n";
}

int main() {
    FAST_IO

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}