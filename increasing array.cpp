#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int>input(n-1);
    for(int i=0;i<n;i++){
        cin>> input[i];
    }
    int ans = 0;
    for(int i=1;i<n;i++){
        if(input[i] < input[i-1]){
            ans += input[i-1]-input[i];
            input[i]=input[i-1];
        }
    }
    cout << ans;
    return 0;
    
}
