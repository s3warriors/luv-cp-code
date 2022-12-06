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

    // TODO TRICK.1==> to check even or odd?

    if ((n & 1) != 0)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
    cout << endl;

    // TODO TRICK.2==>  to divide and multiply by 2
    cout << (n << 1) << endl; // multiply

    cout << (n >> 1) << endl; // divide

    // TODO  TRICK.3==> upppercase to lower case && vice versa
    char ch = 'A';
    char chh = 'b';

    // /* printing binary of char from A to e */
    // for (int i = 'A'; i <= 'E'; i++)
    // {
    //     cout << i << endl;
    //     printBinary(i);
    // }

    // /* printing binary of char from a to e */
    // for (int i = 'a'; i <= 'e'; i++)
    // {
    //     cout << i << endl;
    //     printBinary(i);
    // }

    cout << char(ch | (1 << 5)) << endl; // TODO  U-->L
    // or
    cout << char(ch | ' ') << endl;

    cout << char(chh & (~(1 << 5))) << endl; // TODO  L-->U
    // or
    cout << char(chh & '_') << endl;


    // TODO  TRICK.4==> clear lsb's until ith bit
 int a=59;
 int i=4;
 printBinary(a);
 printBinary(a&(~((1<<(i+1))-1)));


    // TODO  TRICK.5==> clear msb's until ith bit

 printBinary(a&(((1<<(i+1))-1)));


    // TODO  TRICK.6==> power of 2 or not
    if(n&(n-1)) cout<<"no"<<endl;           //if n(00010000) & n-1(00001111) ==0(00000000)
        else cout<<"yes"<<endl;



    return 0;
}