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

    vi arr(n);

    htii ht;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
        
        ht[x] = i;
    }

    int m;
    cin >> m;

    ll a = 0;
    ll b = 0;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        a += 1 + ht[x];
        b += n - ht[x];
    }

    cout << a << " " << b;

    return 0;
}