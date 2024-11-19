#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;

const int INF = LLONG_MAX >> 1;

signed main() {

    ios::sync_with_stdio(false); cin.tie(NULL);

     
        vector<long long> results;
        int n;
        cin>>n;
    
    for (int k = 1; k <= n; ++k) {
        // Total ways to place two knights
        long long totalPositions = (1LL * k * k * (k * k - 1)) / 2;
        
        // Attacking positions
        long long attackingPositions = (k > 2) ? 4LL * (k - 1) * (k - 2) : 0;
        
        // Non-attacking positions
        results.push_back(totalPositions - attackingPositions);
    }
    
    // Output the results
    for (const auto &res : results) {
        cout << res << endl;
    }

    
}