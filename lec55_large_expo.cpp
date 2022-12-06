//but what if a,m>10^9||m<=10^18
#include <bits/stdc++.h>

using namespace std;
const long long int M = 1e9;

//TODO    if a>10^9 ===>   func me dalte hi modulo le lenge
// int binEx(long long a, int b)
// { // O(log(b))
//     a %= M;  //value chhoti ho jayegi M se
// //     or
// // a=binEx(2,1024) //ye %modulo hi print krega
//     int ans = 1;
//     while (b)
//     { // log(b) times chalega kyunki utni hi bits hogi
//         if (b & 1)
//             ans = (ans * 1LL * a) % M;
//         a = (a * 1LL * a) % M;
//         b >>= 1;
//     }
//     return ans;
// }

//TODO    if m<=10^18===>  binary multiplication krna pdega kyu? niche to dekho

int binMul(long long int a,long long int b){
      int ans = 0;
    while (b)
    { // log(b) times chalega kyunki utni hi bits hogi
        if (b & 1)
            ans = (ans + a) % M;
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

int binEx(long long  a, long long  b)  //O(log(n)*log(n))
{ 
    int ans = 1;
    while (b)
    { 
        if (b & 1)
            ans = binMul(ans , a); 
            /* kyu?===> yhn ans*a nhi hoga dusri baar
             kyunki a and ans dono hi 10^18 ki range me honge to overflow ho jayega */

        a = binMul(a , a); 
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