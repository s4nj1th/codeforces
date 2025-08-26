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
#define pii pair<int, int>
#define vpii vector<pii>

void solve() {
    int n;
    cin >> n;

    int a;
    cin >> a;

    int b;
    cin >> b;

    if (n%2 != b%2) {
        cout << "NO\n";
        return;
    }

    if (a > b && a%2 != b%2) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main() {
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        solve();

    return 0;
}