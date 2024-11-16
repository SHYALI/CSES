#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> arr(n - 1); 
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    
    int originalSum = (n * (n + 1)) / 2; 
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i]; 
    }
    
    int ans = originalSum - sum; 
    cout << ans << endl;

    return 0;
}
