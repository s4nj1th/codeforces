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
    
    vector<int> p(n);
    vector<int> ans(n);
    
    for (int i = 0; i < n; i++) {
      int r;
      cin >> r;
      p[i] = r;
      ans[r - 1] = i + 1;
    }
  
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << "\n";
  
    return 0;
}