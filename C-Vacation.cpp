#include <bits/stdc++.h>
using namespace std;

int N;
vector<array<int,3>> a;
vector<array<int,3>> memo;
vector<array<bool,3>> vis;

int dp(int i, int j) {
    if (i == 0) return a[0][j];
    if (vis[i][j]) return memo[i][j];
    vis[i][j] = true;
    int best = 0;
    for (int k = 0; k < 3; k++) if (k != j) best = max(best, dp(i - 1, k));
    return memo[i][j] = best + a[i][j];
}

int main() {
    cin >> N; a.resize(N);
    for (auto &x : a) cin >> x[0] >> x[1] >> x[2];
    memo.assign(N, {0,0,0});
    vis.assign(N, {false,false,false});
    int ans = 0;
    for (int j = 0; j < 3; j++) ans = max(ans, dp(N - 1, j));
    cout << ans << endl;
}
