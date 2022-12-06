#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long int factorial=1;
    for(int i=2;i<=n;i++){
        /* print answer modulo m=20 */
        factorial=(factorial*i)%20;
    }
    cout<<factorial;
return 0;
}