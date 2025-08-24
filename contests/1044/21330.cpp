#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define vl vector<ll>
#define vvl vector<vector<ll>

void solve() {
    int n;
    cin >> n;

    unordered_map<int,int> ht;
    bool flag = false;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ht[x]++;
        if (ht[x] >= 2) flag = true;
    }

    cout << (flag ? "YES\n" : "NO\n");
}

int main() {
    int n = 0;
    cin >> n;

    while (n--)
        solve();

    return 0;
}