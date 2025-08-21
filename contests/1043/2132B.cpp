#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define vl vector<ll>
#define vvl vector<vector<ll>

void solve() {
    long long n;
    cin >> n;

    vector<long long> ans;

    for (long long k = 1, pow10 = 10; pow10 <= n; k++, pow10 *= 10) {
        long long divisor = 1 + pow10;
        if (n % divisor == 0) {
            long long x = n / divisor;
            ans.push_back(x);
        }
    }

    if (ans.empty()) {
        cout << 0 << "\n";
    } else {
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        cout << ans.size() << "\n";
        for (auto v : ans) cout << v << " ";
        cout << "\n";
    }
}

int main() {
    int n = 0;
    cin >> n;

    while (n--)
        solve();

    return 0;
}