#include <bits/stdc++.h>

using namespace std;
/* size limit in global in order of 1e7 why? coz global variable stores in data segment has no limit */
const int n=1e7;
int a[n];

int main()
{
    /* array for storing same type of datatype */
    // int n;
    // cin>>n;
    // int arr[n];//we can use other data types array also but not char array coz its behave like a string but not efficiently
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<arr[i>n] it will show "segmentation fault" bcoz we want to excess that memory location which is not allocated

    /*  2d array
    3 rows 4 column matrix*/
    // int n, m;
    // cin >> n >> m;
    // int a[n][m];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }cout<<endl;
    // }

/* ********arrays size limit in local 1e5 why? coz local variable store in stack memory has a size limit of approx 8 mb */
// int n=1e5;
// int a[n];
a[n-1]=7;
cout<<a[n-1];
    return 0;
}