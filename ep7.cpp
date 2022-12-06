#include <bits/stdc++.h>
using namespace std;

/* if we pass a variable by value (not actual variable but its copy)
so value of variable will not be changed but when we pass a variable by ots reference so its value also changed  */


///* 1.. */ void increment(int &n, int n1)
// {
//     n++;
//     n1++;
// }

///* 2.. */ void swap(int &n, int &n1)
// {
//    int temp=n;
//    n=n1;
//    n1=temp;
// }

// /* 3... */ void func(string &s)
// {
//     s="aa";
// }

/* in case of array we cannot pass a variable by value its automatically pass through reference */

// /* 4... */ void func(int a[])
// {
//    a[0]=6;
// }

/* for 2d array or nd array */

// /* 5... */ void func(int a[][20])
// {
//    a[0][0]=6;
// }
/* but if want to give an input for number of elements so for that we have to declare
a constant integer which is greater than the given constraint of our input  */

const int n=1e3+10;
int a[n][n];
/* 6... */ void func()
{
   a[0][0]=6;
}

int main()
{
    /* function in notebook */
    /* references */
    // int a = 3;
    // int b = 5;
    // cout << a << " " << b << endl;
    // // increment(a, b);
    // swap(a,b);/* inbuilt function of cpp */

    // cout << a << " " << b << endl;
//     string s="asdfghj";
//     cout<<s<<endl;
// func(s);
//     cout<<s<<endl;
//     return 0;

// int a[10];
// a[0]=7;
// cout<<a[0]<<endl;
// func(a);
// cout<<a[0]<<endl;

// int a[10][20];
// a[0][0]=7;
// cout<<a[0][0]<<endl;
// func(a);
// cout<<a[0][0]<<endl;

/* for case 6 */
a[0][0]=7;
cout<<a[0][0]<<endl;
func();
cout<<a[0][0]<<endl;

}