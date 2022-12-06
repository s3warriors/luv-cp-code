#include<bits/stdc++.h>

using namespace std;
// const int N=1e5+10;/* as given in the question  1*/

const int N=1e3+10;/* as given in the question  2  */
int arr[N][N];
  int pf[N][N];/* initially all elements of a array declared in global region is zero */

int main(){
   /*method 1...prefix sum a to b;
   
   
     int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
    long long    int sum=0;
        for(int i=a;i<=b;i++){
sum+=arr[i];
        }
        cout<<sum<<endl;
    } */




    //method 2 prefix sum method
    
    //  int n;
    // cin>>n;
    // /* in prefix sum problems array is started from 1 coz pf(i-1)==pf(0)==0 so we dont require any if else statement */
    // for(int i=1;i<=n;i++){
    //     cin>>arr[i];
    //     pf[i]=pf[i-1]+arr[i];
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int a,b;
    //     cin>>a>>b;
    
    //     cout<<pf[b]-pf[a-1];
    // }







    /* prefix sum in 2D arrays */


    /* method 1 aam zindagi */
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
// cin>>arr[i][j];
// // cout<<arr[i][j]<<" ";
// }

// }
// int q;
// cin>>q;
// while(q--){
// long long sum=0;
// int a,b,c,d;
// cin>>a>>b>>c>>d;

// for(int i=a;i<=c;i++){
//     for(int j=b;j<=d;j++){
//     sum+=arr[i][j];
// }}
// cout<<sum<<endl;
// }



/* mentos zindagi method 2 */
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
cin>>arr[i][j];
pf[i][j]=pf[i][j-1]+pf[i-1][j]- pf[i-1][j-1]+arr[i][j];
}

}
int q;
cin>>q;
while(q--){
long long sum=0;
int a,b,c,d;
cin>>a>>b>>c>>d;

cout<<(pf[c][d])-(pf[a-1][d])-(pf[c][b-1])+(pf[a-1][b-1])<<endl;} 
return 0;
}
