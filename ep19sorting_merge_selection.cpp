#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int arr[N];

/****************************** merge code */

void merge(int l, int r, int mid)
{
                                                                    //   cout << "14    "
                                                                        //    << "the value of l , r, and mid is  " << l << " " << r << " " << mid << endl;
    int first_size = mid - l + 1;
                                                                    //   cout << "16    "
                                                                        //    << "first_size is" << first_size << endl;
    int first[first_size + 1];
    /* ye pahli array bnali */
    for (int i = 0; i < first_size; i++)
    {
        first[i] = arr[i + l];
                                                                        //   cout << "22    " << i << "th element of first is   " << first[i] << endl;
    }
    int second_size = r - mid;
    int second[second_size + 1];
                                                                    //   cout << "26    "
                                                                        //    << "second_size is" << second_size << endl;
    /* ye dusri array bnali */
    for (int i = 0; i < second_size; i++)
    {
        second[i] = arr[mid + 1 + i];
                                                                        //   cout << "31    " << i << "th element of second is  " << second[i] << endl;
    }

    first[first_size] = second[second_size] = INT_MAX;

    int first_i = 0;
    int second_i = 0;
    /* loop for merging */
    for (int i = l; i <= r; i++)
    {
        if (first[first_i] <= second[second_i])
        {
            arr[i] = first[first_i];
                                                            //    cout << "44   " << i << "th element of arr is  " << arr[i] << endl;
            first_i++;
        }
        else
        {
            arr[i] = second[second_i];
                                                            //    cout << "50    " << i << "th  element of arr is  " << arr[i] << endl;
            second_i++;
        }
    }
}

/*************mergesort code  */

void mergesort(int l, int r)
{
                                                        // cout << "65   the value of l , r, and mid is  " << l << " " << r << " " << endl;
    int mid = l + (r - l) / 2;
                                                        // cout << "67   the value of l , r, and mid is  " << l << " " << r << " " << mid << endl;
    if (l == r)
    {
                                                        // cout << "70   the value of l , r, and mid is  " << l << " " << r << " " << mid << endl;
        return;
    }
    mergesort(l, mid);
                                                        //  cout << "74   the value of l , r, and mid is  " << l << " " << r << " " << mid << endl;
    mergesort(mid + 1, r);
                                                        // cout << "76   the value of l , r, and mid is  " << l << " " << r << " " << mid << endl;
    merge(l, r, mid);
}

int main()
{
    int n;
    cin >> n;
    // int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /* merge sort  */

    mergesort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/* selection sort complexity of o(n^2)*/
// for(int i=0;i<n;i++){
//     int minIndex=i;
//     for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[minIndex])
//         minIndex=j;
//     }
//     swap(arr[i],arr[minIndex]);
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }

// void mergesort(int l, int r)   /* 0,3 */
// {
//     int mid = (l + r) / 2;  /* 1 */
//     if (l == r)
//     {
//         return;
//     }
//     mergesort(l, mid);      0,1,0
//     mergesort(mid + 1, r);  2,3,2

//     merge(l, r, mid);     0,3,1
// }