#include <bits/stdc++.h>
using namespace std;
int N, K;
vector<int> h;
vector<long long> memo;
long long dp(int i) {
    if (i == 0) return 0;
  
    if (memo[i] != -1) return memo[i];
  
    long long res = LLONG_MAX;
  
    for (int j = 1; j <= K && i - j >= 0; j++){
      res = min(res, dp(i - j) + abs(h[i] - h[i - j]));
    }
    
    return memo[i] = res;
}
int main() {
    cin >> N >> K; h.resize(N);
    for (auto &x : h) cin >> x;
    memo.assign(N, -1);
    cout << dp(N - 1) << endl;
}
