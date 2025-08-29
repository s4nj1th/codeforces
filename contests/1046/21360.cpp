#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define vll vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define htii unordered_map<int, int>
#define htci unordered_map<char, int>
#define pii pair<int, int>
#define vpii vector<pii>

bool valid(int x, int y) {
    int mx = max(x, y);
    int mn = min(x, y);
    return (mx <= 2 * (mn + 1));
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (valid(a, b) && valid(c - a, d - b)) {
        cout << "YES\n";
        return;
    }
    
    cout << "NO\n";
}

int main() {
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        solve();

    return 0;
}