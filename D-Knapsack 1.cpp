#include <bits/stdc++.h>
using namespace std;

int N; long long W;
vector<long long> w, v;
vector<vector<long long>> memo;

long long dp(int i, long long cap) {
    if (i == N) return 0;
    if (memo[i][cap] != -1) return memo[i][cap];
    long long res = dp(i + 1, cap);
    if (cap >= w[i]) res = max(res, dp(i + 1, cap - w[i]) + v[i]);
    return memo[i][cap] = res;
}
int main() {
    cin >> N >> W; w.resize(N); v.resize(N);
    for (int i = 0; i < N; i++) cin >> w[i] >> v[i];
    memo.assign(N, vector<long long>(W + 1, -1));
    cout << dp(0, W) << endl;
}
