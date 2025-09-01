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

int main() {
    FAST_IO
    
    int n, f;
    cin >> n >> f;

    vll gain(n);
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        ll k, l;
        cin >> k >> l;
        sum += min(k, l);
        gain[i] = min(2*k, l) - min(k, l);
    }

    sort(all(gain));

    for (int i = n-1; i >= n-f; i--) {
        if (gain[i] > 0) sum += gain[i];
    }

    cout << sum;

    return 0;
}
