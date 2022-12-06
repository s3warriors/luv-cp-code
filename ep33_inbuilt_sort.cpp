#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[7] ={3,6,7,3,8,6,1};
    sort(arr,arr+7);
    for(int i:arr){
        cout<<i<<" ";
    }
cout<<endl;
    vector<int>v={5,6,7,8,5,6,0,0,3};
    sort(v.begin()+2,v.end()-3);  //5 6---------5 6 7 8------0 0 3
    for(auto i:v){
        cout<<i<<" ";
    }
    
return 0;
}