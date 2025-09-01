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
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int l = 0;
    while (l < n-1 && arr[l] < arr[l+1]) l++;

    if (l == n-1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    int r = l;
    while (r < n-1 && arr[r] > arr[r+1]) r++;

    if ((l > 0 && arr[l-1] > arr[r]) || (r < n-1 && arr[l] > arr[r+1])) {
        cout << "no\n";
        return 0;
    }

    for (int i = r+1; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n" << l+1 << " " << r+1 << "\n";
    return 0;
}
