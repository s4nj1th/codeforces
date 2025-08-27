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
    string s;
    cin >> s;

    if (s.size() < 2) {
        cout << 0;
        return 0;
    }

    int s1 = 0;

    for (char c : s) {
        s1 += c-'0';
    }
    
    int steps = 1;

    int ans = 0;

    while (s1 >= 10) {
        ans = 0;
        while (s1) {
            ans += s1 % 10;
            s1 /= 10;
        }
        s1 = ans;
        steps++;
    }

    cout << steps;

    return 0;
}