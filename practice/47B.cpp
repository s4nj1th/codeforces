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

htci ht;

void weight(htci& ht, string s) {
    if (s[1] == '>') ht[s[0]]++;
    else ht[s[2]]++;
}

int main() {
    string s;

    cin >> s;
    weight(ht, s);

    cin >> s;
    weight(ht, s);
    
    cin >> s;
    weight(ht, s);

    if (ht['A'] == ht['B'] || ht['B'] == ht['C'] || ht['C'] == ht['A']) {
        cout << "Impossible";
        return 0;
    }

    string ans = "XXX";

    for (auto& [x, y] : ht) {
        ans[y] = x;
    }

    cout << ans;

    return 0;
}