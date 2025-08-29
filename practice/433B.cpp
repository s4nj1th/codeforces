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
  int n = 0;
  cin >> n;
}

int main() {

  int n;
  cin >> n;

  vll arr(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> arr[i];

  vll arr2 = arr;
  sort(arr2.begin() + 1, arr2.end());

  vll preSum(n + 1, 0), sPreSum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    preSum[i] = preSum[i - 1] + arr[i];
    sPreSum[i] = sPreSum[i - 1] + arr2[i];
  }

  int m;
  cin >> m;

  while (m--) {
    int t, l, r;
    cin >> t >> l >> r;
    if (t == 1) {
      cout << preSum[r] - preSum[l - 1] << "\n";
    } else {
      cout << sPreSum[r] - sPreSum[l - 1] << "\n";
    }
  }

  return 0;
}