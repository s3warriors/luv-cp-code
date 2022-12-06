#include<bits/stdc++.h>

using namespace std;
const int N =1e7+10;
long long int arr[N];
// long long int pf[N];


int main(){


    /* method 1 hackerrnk problem */

//     int n,q;
//     cin>>n>>q;
   
//     while(q--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         for(int i=a;i<=b;i++){
//             arr[i]+=c;
//         }
//       long long  int maxi=-1;
//        for(int i=1;i<=n;i++){
// // cout<<arr[i]<<" ";
//           maxi= max(arr[i],maxi);
//        } 
//        cout<<maxi<<endl;
//     }



/* method 2 hcrnk problem */

int n,q;
    cin>>n>>q;
  
   
    while(q--){
        int a,b,c;
        cin>>a>>b>>c;
        arr[a]+=c;
        arr[b+1]-=c;}
        /* niche ham prefix sum le rhe h manipulated array ka */
        for(int i=1;i<=n;i++){
arr[i]=arr[i-1]+arr[i];
        }

      long long  int maxi=-1;
       for(int i=1;i<=n;i++){
          maxi= max(arr[i],maxi);
          cout<<arr[i]<<" ";
       } 
    //    cout<<maxi<<endl;
    
return 0;
}