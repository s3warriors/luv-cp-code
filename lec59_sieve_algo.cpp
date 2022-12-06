#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isprime(N, 1);

int main(){

    { // O(log(log(n)));
        isprime[0] = isprime[1] = 0;
        for (int i = 2; i < N; i++)
        {
            if (isprime[i] == 1)
            {
                for (int j = 2 * i; j < N; j += i)
                {
                    isprime[j] = 0;
                }
            }
        }
        for (int i = 1; i < 100; i++)
        {
            cout << i << " " << isprime[i] << endl;
        }
    }

        return 0;
}