#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define vl vector<ll>
#define vvl vector<vector<ll>

int main() {
    int n = 0;
    cin >> n;
    
    int k = 0;
    cin >> k;

    string alp = "abcdefghijklmnopqrstuvwxyz";

    string s;

    for (int i = 0; i < k; i++) {
        s += alp[i];
    }

    for (int i = 0; i < n-k; i++) {
        s += alp[i % k];
    }

    cout << s;

    return 0;
}