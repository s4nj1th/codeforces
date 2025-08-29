#include <bits/stdc++.h>
using namespace std;

#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(nullptr);

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define pb push_back
#define all(x) (x).begin(), (x).end()

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#ifdef DEBUG
#define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
#define dbg(x)
#endif

int n, m;
char col;

bool valid(int x, int y) { return x > -1 && x < n && y > -1 && y < m; }

int dirx[] = {-1, 0, 1, 0};
int diry[] = {0, 1, 0, -1};
char room[101][100];
set<char> ans;

int main() {
  cin >> n >> m >> col;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> room[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) {

      if (room[i][j] == col)
        for (int k = 0; k < 4; k++) {
          int x = i + dirx[k];
          int y = j + diry[k];
          if (valid(x, y) && room[x][y] != col && room[x][y] != '.')
            ans.insert(room[x][y]);
        }
    }

  cout << ans.size() << endl;

  return 0;
}