#include <bits/stdc++.h>

using namespace std;
const int N = 1e7 + 10;
const int n = 1e5 + 10;
vector<bool> isprime(N, 1);
vector<int> lp(N), hp(N);

vector<int> divisors[n];
int main()
{

    { // TODO highest/lowest prime
        isprime[0] = isprime[1] = 0;
        for (int i = 2; i < N; i++)
        {
            if (isprime[i] == 1)
            {
                lp[i] = hp[i] = i;
                for (int j = 2 * i; j < N; j += i)
                {
                    isprime[j] = 0;
                    hp[j] = i;
                    if (lp[j] == 0)
                        lp[j] = i;
                }
            }
        }
        // for (int i = 1; i < 100; i++)
        // {
        //     cout << i << " " << isprime[i] << " " << hp[i] << " " << lp[i] << endl;
        // }
    }


 /*    { // TODO prime factorisation using lowest or highest prime factor  O(log(n))
        int num;
        cin >> num;
        vector<int> prime_factors;
        while (num > 1)
        {
            int prime_factor = lp[num];
            while (num % prime_factor == 0)
            {
                num /= prime_factor;
                prime_factors.push_back(prime_factor);
            }
        }
        for (auto i : prime_factors)
        {
            cout << i << " ";
        }
        cout << endl;
    } */


    { // TODO divisors  O(log(n))
         
    //     for (int i = 1; i < n; i++)
    //     {
           
    //       for (int j =  i; j < n; j += i)
    //             {
    //                 divisors[j].push_back(i);
    //                     }
    //     }
    //     for (int i = 0; i < 100;i++){
    //         cout <<"divisior of "<< i << " is  ";
    //         for (auto j : divisors[i])
    //         {
    //             cout <<j<<" ";
    //         }
    //     cout << endl;}
    // }

    
        for (int i = 1; i < n; i++)
        {
           
          for (int j =  i; j < n; j += i)
                {
                    divisors[j].push_back(i);
                        }
        }
        for (int i = 0; i < 100;i++){
            cout <<"divisior of "<< i << " is  ";
            for (auto j : divisors[i])
            {
                cout <<j<<" ";
            }
        cout << endl;}
    }
    return 0;
}