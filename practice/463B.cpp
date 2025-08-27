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

int main() {
    int n = 0;
    cin >> n;

    vi h(n+1);
    int maxH = 0;

    for (int i = 0; i < n; i++) {
        cin >> h[i+1];
        maxH = max(maxH, h[i+1]);
    }

    cout << maxH;

    return 0;
}