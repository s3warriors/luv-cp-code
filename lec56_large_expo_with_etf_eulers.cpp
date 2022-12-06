//but what if b>10^9
#include <bits/stdc++.h>

using namespace std;
const int M = 1e9+7;
int binEx(long long int a, long long int b,int m)
{ // O(log(b))
  long long   int ans = 1;
    while (b)
    { // log(b) times chalega kyunki utni hi bits hogi
        if (b & 1)
            ans = (ans * 1LL * a) % m;
        a = (a * 1LL * a) % m;  
        b >>= 1;
    }
    return ans;
}
int main()
{
  //(50^64^32)%M
  //2^3^2
  int t;
  cin >> t;
  while(t--){
  int a, b, c;
  cin >> a >> b >> c;
  cout << binEx(a, binEx(b, c, M - 1), M) << endl;
  }
  return 0;
}

//super pow question ====>leetcode