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
    int n;
    cin >> n;

    string base = "ROYGBIV";
    string extra = "GBIV";

    string result = base;
    for (int i = 7; i < n; i++) {
        result += extra[(i - 7) % 4];
    }

    cout << result;
    return 0;
}
