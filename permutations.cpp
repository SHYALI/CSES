#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (n <= 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> ans;

    
    for (int i = 2; i <= n; i += 2) {
        ans.push_back(i);
    }


    for (int i = 1; i <= n; i += 2) {
        ans.push_back(i);
    }


    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
