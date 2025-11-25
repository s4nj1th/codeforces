#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define htii unordered_map<int, int>
#define htci unordered_map<char, int>
#define htil unordered_map<int, ll>
#define htli unordered_map<ll, int>
#define htcl unordered_map<char, ll>

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#ifdef DEBUG
    #define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
    #define dbg(x)
#endif

void backtrack(int idx, int q, int d1, int d2, int &valid) {
    if (idx == q) {
        if (d1 == d2) valid++;
        return;
    }

    backtrack(idx + 1, q, d1, d2 + 1, valid);
    backtrack(idx + 1, q, d1, d2 - 1, valid);
}

int main() {
    FAST_IO
    
    string s1, s2;
    cin >> s1 >> s2;

    int d1 = 0, d2 = 0;
    for (char c : s1) {
        if (c == '+') d1++;
        else d1--;
    }

    int q = 0;
    for (char c : s2) {
        if (c == '+') d2++;
        else if (c == '-') d2--;
        else q++;
    }

    int valid = 0;
    backtrack(0, q, d1, d2, valid);
    double tot = (1 << q);
    cout.setf(ios::fixed); cout << setprecision(12) << (double)valid / tot << "\n";

    return 0;
}
