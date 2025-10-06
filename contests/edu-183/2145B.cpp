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
    string ops;
    cin >> ops;

    int f = 0, b = 0, m = 0;
    for (char c : ops) {
        if (c == '0') f++;
        else if (c == '1') b++;
        else m++;
    }
    
    string ans(n, '+');
    
    if (k >= n) {
        for (int i = 0; i < n; i++)
           cout << '-';

        cout << endl;
        return;
    }

    int l = 0, r = n - 1;

    for (int i = 0; i < f; i++)
        if (l <= r) ans[l++] = '-';

    for (int i = 0; i < b; i++)
        if (l <= r) ans[r--] = '-';

    for (int i = 0; i < m; i++){
        if (l<=r) ans[l++] = '?';
        if (l<=r) ans[r--] = '?';
    }

    cout << ans << endl;
}

int main() {
    FAST_IO
    
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
