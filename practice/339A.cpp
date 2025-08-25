#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define vl vector<ll>
#define vvl vector<vector<ll>

int main() {
    string s;
    cin >> s;

    int n = s.size();

    if (n == 1) {
        cout << s;
        return 0;
    }

    int no1 = 0;
    int no2 = 0;
    int no3 = 0;
    
    vector<int> nums;
    for (int i = 0; i < n; i+=2) {
        if (s[i] == '1') no1++;
        if (s[i] == '2') no2++;
        if (s[i] == '3') no3++;
    }

    string t;

    while (no1--) {
        t+='1';
        t+='+';
    }

    while (no2--) {
        t += '2';
        t += '+';
    }

    while (no3--) {
        t += '3';
        t += '+';
    }

    t.pop_back();
    cout << t;
    
    return 0;
}