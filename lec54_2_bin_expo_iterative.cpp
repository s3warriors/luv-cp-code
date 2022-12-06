/* Here we have in mind that both a and b are less than 10^9.
   iterative approach*/

#include <bits/stdc++.h>

using namespace std;
const int M = 1e9;
int binEx(int a, int b)
{ // O(log(b))
    int ans = 1;
    while (b)
    { // log(b) times chalega kyunki utni hi bits hogi
        if (b & 1)
            ans = (ans * 1LL * a) % M;
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << binEx(a, b) << endl;

    return 0;
}