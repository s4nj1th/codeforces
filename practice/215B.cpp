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
    vector<int> x(n);
    for (int i = 0; i < n; ++i) cin >> x[i];

    int m; cin >> m;
    vector<int> y(m);
    for (int i = 0; i < m; ++i) cin >> y[i];

    int k; cin >> k;
    vector<int> z(k);
    for (int i = 0; i < k; ++i) cin >> z[i];

    int A, B; cin >> A >> B;

    int r1 = *max_element(x.begin(), x.end());
    int p1 = *max_element(y.begin(), y.end());
    int p2 = *min_element(z.begin(), z.end());

    long double denom = 1.0L + (long double)A * (long double)p2 / ((long double)B * (long double)p1);
    long double r2 = (long double)r1 / sqrtl(denom);
    cout.setf(ios::fixed);
    cout << setprecision(12) << (double)r2 << "\n";

    return 0;
}
