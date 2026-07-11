# AtCoder Educational DP Contest (EDPC) — All 26 Problems

# Summary Table

| # | Name | Core Technique | Optimal Time | Optimal Space |
|---|------|-----------------|---------------|----------------|
| A | Frog 1 | Linear DP | O(N) | O(1) |
| B | Frog 2 | Linear DP, K-window | O(N*K) | O(N) |
| C | Vacation | State DP | O(N) | O(1) |
| D | Knapsack 1 | 0/1 Knapsack (weight) | O(N*W) | O(W) |
| E | Knapsack 2 | 0/1 Knapsack (value) | O(N*ΣV) | O(ΣV) |
| F | LCS | 2D String DP | O(N*M) | O(N*M) |
| G | Longest Path | DAG DP / Topo sort | O(N+M) | O(N+M) |
| H | Grid 1 | Grid path counting | O(H*W) | O(W) |
| I | Coins | Probability DP | O(N²) | O(N) |
| J | Sushi | Expected value DP | O(N³) | O(N³) |
| K | Stones | Game theory DP | O(N*K) | O(N) |
| L | Deque | Interval minimax DP | O(N²) | O(N²) |
| M | Candies | Prefix-sum optimized DP | O(N*C) | O(C) |
| N | Slimes | Interval (matrix-chain) DP | O(N³) | O(N²) |
| O | Matching | Bitmask DP | O(2^N * N) | O(2^N) |
| P | Independent Set | Tree DP | O(N) | O(N) |
| Q | Flowers | LIS + Fenwick Tree | O(N log N) | O(N) |
| R | Walk | Matrix Exponentiation | O(N³ log K) | O(N²) |
| S | Digit Sum | Digit DP | O(len*D) | O(len*D) |
| T | Permutation | Prefix-sum DP | O(N²) | O(N) |
| U | Grouping | Bitmask + submask DP | O(3^N) | O(2^N) |
| V | Subtree | Tree DP + Rerooting | O(N) | O(N) |
| W | Intervals | Event-based DP | O(N+M) | O(N+M) |
| X | Tower | Sort + Knapsack | O(N*ΣW) | O(ΣW) |
| Y | Grid 2 | Combinatorics + Inclusion-Exclusion | O(N²) | O(N) |
| Z | Frog 3 | Convex Hull Trick | O(N) | O(N) |

**Note on Memoization vs Bottom-Up:** For problems with a natural overlapping-subproblem recursive structure (A–P, and the tree-based P/V), both Top-Down (memoized recursion) and Bottom-Up (tabulation) are provided and are equally optimal in complexity — bottom-up typically has better constant factors (no recursion overhead) and avoids stack-depth issues. For problems whose optimal solution relies on a specialized non-DP-table technique (Q: Fenwick Tree, R: Matrix Exponentiation, S: Digit DP recursion *is* the memoized form, W: event-sorted DP, X: sorted knapsack, Y: inclusion-exclusion, Z: Convex Hull Trick), the "accepted optimal" solution is inherently iterative/bottom-up in nature; a naive memoized alternative is noted where it exists, but it is not the optimal complexity.
