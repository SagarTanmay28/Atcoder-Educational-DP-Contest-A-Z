#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> h, memo;
int dp(int i) {
  if (i == 0) return 0;
  if (i == 1) return abs(h[1] - h[0]);

  if (memo[i] != -1) return memo[i];
  
  int res = min(dp(i - 1) + abs(h[i] - h[i - 1]),
                dp(i - 2) + abs(h[i] - h[i - 2]));
  
  return memo[i] = res;
}

int main() {
  cin >> N; h.resize(N);
  for (auto &x : h) cin >> x;
  memo.assign(N, -1);
  cout << dp(N - 1) << endl;
}
