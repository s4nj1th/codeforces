#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define htii unordered_map<int, int>
#define htci unordered_map<char, int>

int main() {
    int n, a;
    cin >> n >> a;
    a--;

    vb cr(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cr[i] = (x != 0);
    }

    int ans = 0;

    for (int d = 0; d < n; d++) {
        int l = a - d;
        int r = a + d;

        if (l < 0 && r >= n) break;

        if (l >= 0 && r < n) {
            if (l == r) {
                if (cr[l]) ans++;
            } else {
                if (cr[l] && cr[r]) ans += 2;
            }
        } else if (l >= 0) {
            if (cr[l]) ans++;
        } else if (r < n) {
            if (cr[r]) ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}