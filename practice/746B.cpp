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
    
    bool front = (n%2 == 0);

    string s;
    cin >> s;

    string t;

    for (int i = 0; i < n; i++) {
        if (front) t = s[i]+t;
        else t = t+s[i];

        front = !front;
    }

    cout << t;

    return 0;
}