#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    
        
        
      long long n ;
      cin>>n;
      cout<<n<<" ";
      while(n!=1){
          if(n%2 == 0){
              n = n/2;
              cout<<n<<" ";
          }
          else{
              n = n*3 +1;
              cout<<n<<" ";
          }
      }
      
    
}
