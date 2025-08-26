#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define vl vector<ll>
#define vvl vector<vector<ll>

int main() {
    int n = 0;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    int maxW = 0;

    for (int i = 0; i < n; i++) {
        int l = i;
        int r = i;

        while (l > 0 && h[l-1] <= h[l]) {
            l--;
        }

        while (r < n-1 && h[r+1] <= h[r]) {
            r++;
        }

        maxW = max(maxW, r - l + 1);
    }

    cout << maxW << "\n";

    return 0;
}