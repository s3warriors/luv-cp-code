#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
    if (a % b == 0)
        return b; // if(b==0) return a;
    return gcd(b, a % b);
}
int main()
{
    cout << "gcd is " << gcd(18, 12) << endl;
    cout << "gcd is " <<gcd(12, 18) << endl; // If a was smaller than b, it would be automatically swapped in the next recursive call.
    cout << "lcm is " << 12 * 18 / gcd(12, 18) << endl;

    // TODO inbuilt function for gcd is-------->> __gcd(a,b);
    cout << "gcd is " << __gcd(18, 12) << endl;
    return 0;
}