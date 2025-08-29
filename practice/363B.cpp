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
    int n, k;
    cin >> n >> k;

    vi arr(n + 1);
    vi preSum(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        preSum[i] = preSum[i - 1] + arr[i];
    }

    int ans = 1;
    int minH = preSum[k] - preSum[0];

    for (int i = 2; i <= n - k + 1; i++) {
        int curSum = preSum[i + k - 1] - preSum[i - 1];
        if (curSum < minH) {
            minH = curSum;
            ans = i;
        }
    }

    cout << ans << "\n";
    return 0;
}