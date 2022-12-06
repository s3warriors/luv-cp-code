/* *binary search (kahan lagega---->>>>> elements should be in monotonic function) 
benefits----->>>>>> complexity o(logN)
coz N/(2^K)==1,,, 2^k==n,,, k==logN*/
#include <bits/stdc++.h>

using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int i = 0;
    int j = n - 1;
    int mid = i+(j-i)/2;
    while (i <= j)
    {
        if (arr[mid] == key)
        {
            // cout<<"hi"<<endl;
            // cout<<"i"<<i<<endl;
            return mid;
        }
        else if (arr[mid] < key)
        {
            // cout<<"hello"<<endl;
            i = mid + 1;
            // cout<<"i"<<i<<endl;
        }
        else
        {
            // cout<<"hero"<<endl;
            j = mid - 1;
            // cout<<"i"<<i<<endl;
        }
        mid = i+(j-i)/2;
    }
    return -1;
            // cout<<"namaskar"<<endl;
}

int main()
// { int t,index;
// cin>>t;
// while(t--)
{
    int arr[8] = {1, 3, 4, 5, 6, 7, 8, 9};
    // int key;
    // cin >> key;
    int index=binarySearch(arr, 8, 5 );
    cout << index;
    return 0;
}