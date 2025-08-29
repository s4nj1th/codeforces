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
  cin >> n;

  vi arr(n);
  unordered_map<int, vvi> ht;
  vi dp(n + 1, 0);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[i] = x;

    if (x == 1) {
      dp[i + 1] = dp[i] + 1;
    } else if (ht.find(x) != ht.end()) {
        auto &v = ht[x];
        auto &start = v[0];
        auto &count = v[1];

        start.push_back(i);
        count[0]++;

        dp[i+1] = dp[i];


        if ((start.size() >= x) &&
            (dp[start[start.size() - x]] + (x * (count[0] / x)) > dp[i])) {
            dp[i+1] = max(dp[i+1], dp[start[start.size() - x]] + (x * (count[0] / x)));
            count[0] = 0;
        }

    } else {
        ht[x] = {{i}, {1}};
    }

    dp[i+1] = max(dp[i], dp[i+1]);
  }

  cout << dp[n] << endl;
}

int main() {
  int n = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
    solve();

  return 0;
}