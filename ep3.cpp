#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=3;
    int b=4;
    double d= b/a;
    cout<<d<<endl; /* here b/a is int bcoz both a nd b are int so double gets only integer value */
 cout<< 'c'+1<<endl;
 cout<< 3*1.2;
    /* precedance of data type
     double
    float
    long long int
    long int
    int
    char */
    //     int a= 1000000;
    //     int b=1000000;
    //     cout<<a*b<<endl; /* overflow --->>>> we want to store the value which is greater than the max input of that data type.*/

    //    cout<<a*1LL*b<<endl; /* either we can use 1LL in between a nd b or we can decalare a nd b as a long long integer */

    //  long long int a= 1000000;
    //   long long  int b=1000000;
    //     cout<<a*b<<endl;

    /* why we not use double for long integers----->>>>>>>> bcoz yes in double we can store large
    values but in the cost of accuracy */
    //     double a= 10e+5;
    //  double  b=10e+6;
    //     cout<<a*b<<endl;

    //     cout<<fixed<< a*b<<endl;

    //     cout<<fixed<<setprecision(0)<< a*b<<endl; /* precision --->>>>>> accuracy */
}