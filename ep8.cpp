#include<bits/stdc++.h>

using namespace std;
 void increment(int *n)
{
    (*n)++;
   
}

int main(){/* array is also a type of pointer
a==&a[0];
*a==a[0]
a+1==&a[1]
*(a+1)==a[1] */
    // int a[4]={2,4,5,6};
    // cout<<&a[0]<<endl;
    // cout<<a<<endl;
    // cout<<*a<<endl;
    // cout<<&a[1]<<endl;
    // cout<<a+1<<endl;
    // cout<<*(a+1)<<endl;
    int a = 3;
  
    cout << a << endl;
    increment(&a);

    cout << a <<endl;
  


return 0;
}