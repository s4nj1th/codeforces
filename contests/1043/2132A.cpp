#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define vl vector<ll>
#define vvl vector<vector<ll>

void solve() {
    int n = 0;
    cin >> n;

    string s;
    cin >> s;
    
    int m = 0;
    cin >> m;
    
    string t;
    cin >> t;

    string ord;
    cin >> ord;

    for (int i = 0; i < m; i++) {
        if (ord[i] == 'D') {
            s = s + t[i];
        } else {
            s = t[i] + s;
        }
    }

    cout << s << endl;
}

int main() {
    int n = 0;
    cin >> n;

    while (n--)
        solve();

    return 0;
}