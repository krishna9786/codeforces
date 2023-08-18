/*
    Author: darkflameace97

    Explanation:
    - For each test case, we are given the cost of the purchase (m), the worth of the second type of coin (k), and the amounts of regular 
    coins of both types (a1 and ak).
    - We want to minimize the number of fancy coins used to make the purchase.
    - We calculate the remainder of m divided by k, which represents the amount that cannot be covered by complete sets of k coins.
    - We calculate two contributions to the total number of fancy coins used:
        1. max(0, remainder - a1): This represents the extra fancy coins needed to cover the remainder, but we subtract a1 because 
        we have regular coins of the first type.
        2. max(0, m - ak): This represents the extra fancy coins needed to cover any remaining regular coins after using complete 
        sets of k coins.
    - We output the total number of fancy coins used.

    Approach:
    - Calculate the remainder of m divided by k.
    - Calculate the two contributions to the total number of fancy coins used.
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;

    long long remainder = m % k;
    long long ans = max(0LL, remainder - a1);
    a1 -= remainder;
    m /= k;

    if (a1 > 0) {
        m -= a1 / k;
    }

    ans += max(0LL, m - ak);
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
