#include <bits/stdc++.h>

using namespace std;
void printBinary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1) << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    printBinary(n);
    int i = 2;
    if ((n & (1 << i)) != 0)
        cout << "set" << endl;
    else
        cout << "unset" << endl;

    // TODO if we want to set a bit at ith location
    printBinary(n |= (1 << i)); // = sirf assign krne k liye h

    i = 3;

    // TODO if we want to unset a bit at ith location
    printBinary(n &= (~(1 << i)));

    i = 2;
    // TODO if we want to toggle a bit at ith location
    printBinary(n ^ (1 << i));

    // TODO counting set bits
    int ct = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((n & (1 << i)) != 0)
            ct++;
    }
    cout << ct << endl;



    //TODO KIM inbuilt func for counting set bit
    cout<<__builtin_popcount(n)<<endl;    //only for int,o(1)/o(logn)
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl;      //2^35-1  have 35 set bits 

    return 0;
}