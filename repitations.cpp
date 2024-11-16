#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    string input;
    cin>>input;
    
    int n = input.size();
    int maxrep = 1;
    int currep = 1;
    
    for(int i=1;i<n;i++){
        if(input[i] == input[i-1]){
            currep++;
            maxrep = max(maxrep , currep);
        }
        else {
            currep = 1;
        }
    }
    
    cout <<  maxrep;
    return 0;
}

