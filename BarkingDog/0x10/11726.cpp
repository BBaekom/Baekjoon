#include <bits/stdc++.h>
using namespace std;
int n;
long long dp[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    // dp[i] = dp[i-1] + dp[i-2]
    dp[1] = 1;
    dp[2] = 2;
    for (long long i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2])%10007;
    }

    cout << dp[n] << '\n';


    return 0;
}