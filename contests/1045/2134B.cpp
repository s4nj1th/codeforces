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

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vll arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if (k % 2) {
        for (int i : arr) {
            if (i % 2) {
                cout << i+k << " ";
            } else {
                cout << i << " ";
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (arr[i] % k != 0) {
                arr[i] = (arr[i] * (k+1));
            } cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int main() {
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        solve();

    return 0;
}