#include<bits/stdc++.h>

using namespace std;


/* q......1 factorial */
// const int N=(10^5)+10; 
//  long long   fact[N];

/* prob............2 query */
const int N=(10^7)+10; 
int hsh[N];
int main(){

    /*********** prob.......1   factorial */

    // fact[0]=fact[1]=1;
    // for(int i=2;i<N;i++){
    //     fact[i]=fact[i-1]*i;
    //     // cout<<fact[i]<<endl;
    // }
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //    cout<<fact[n]<<endl;
    // }

/* prob........2 query (hashing)*/
 
 
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
     hsh[arr[i]]++;
 }
 int q;
 cin>>q;
 while(q--){
     int x;
     cin>>x;
     cout<<hsh[x]<<endl;
 }

return 0;
}