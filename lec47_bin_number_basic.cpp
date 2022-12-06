#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << INT_MAX << endl; 

    // int a=(1<<32)-1;  //error aayega kyunki int me 2^32 nhi store kr skte


    // int a=(1<<31)-1;  //error aayega kyunki  2^31 pahle calculate hoga jo ham int nhi store kr skte


    int a = (1LL << 31) - 1;   //(1<<n==2^n)


    cout << a << endl;


    unsigned int b = (1LL << 32) - 1; // ye chal jayega kyunki unsigned ki range jyada hoti h signed se


    cout << b << endl;


    return 0;
}