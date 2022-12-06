#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int p = n;

    if(n==1){
        cout << 0 << endl;
        return 0;
    }

   { //TODO O(N)
    bool is_prime = true;
    for (int i = 2; i < n;i++){
        if(n%i==0){
            is_prime = false;
            break;
        }
    }
    cout << is_prime << endl;}


   { //TODO O(sqrt(N))
    bool is_prime = true;
    for (int i = 2; i*i <= n;i++){
        if(n%i==0){
            is_prime = false;
            break;
        }
    }
    cout << is_prime << endl;}


   { //TODO prime factorisation O(N)
       vector<int> pf;
       for (int i = 2; i <= n; i++)
       {
           while(n % i == 0)
           {
               pf.push_back(i);
               n /= i;

           }
    }
    for(auto i:pf){
        cout << i << " ";
    }
    cout << endl;
    }

    n = p;
    { // TODO prime factorisation O(sqrt(N))
        vector<int> pfn;
        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                pfn.push_back(i);
                n /= i;
            }
        }
        if (n > 1)
            pfn.push_back(n);

        for (auto i : pfn)
        {
            cout << i << " ";
        }
        cout << endl;
    }




    return 0;
}