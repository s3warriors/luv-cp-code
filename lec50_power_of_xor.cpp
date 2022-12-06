#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 4, b = 6;
    // TODO swap a and b using xor

    a = a ^ b;
    b = b ^ a; // b^(a^b)==b^a^b==b^b^a==a;   //b===> a
    a = a ^ b; //(a^b)^a==a^b^a==b^a^a==b;   //a===> b
    cout << a << " " << b << endl;

    // TODO find one integer with odd count in between other even count integers in TCO(N) & SCO(1)
    int arr[9] = {2, 4, 4, 6, 7, 7, 7, 7, 2};
    int ans = 0;
    for (int i = 0; i < 9; i++)
    {
        ans ^= (arr[i]);
    }
    cout << ans << endl;

    return 0;
}