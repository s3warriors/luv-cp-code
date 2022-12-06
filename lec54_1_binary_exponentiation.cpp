/* Here we have in mind that both a and b are less than 10^9. 
   recursive approach*/

#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 ;
int binEx(int a,int b){
    if(b==0)
        return 1;
    int res = binEx(a, b / 2);
    if(b&1)
        return (a * (res * 1LL * res) % M) % M;   //1LL lagaya kyunki res *res int me store nhi hua to
else 
        return ((res * 1LL * res)) % M;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << binEx(a, b) << endl;
    
    return 0;
}