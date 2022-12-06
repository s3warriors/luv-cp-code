#include<bits/stdc++.h>

using namespace std;
bool should_i_swap(pair<int,int>a,pair<int,int>b){   //isme apan kuch bhi changes krke apne hisaab se swap kr skte h
//    if(a>b) return true;    decreasing array
//    return false
   
   
//    first ko swap krna h(increasing) second ko krna h (decreasing me--->>>>>jab first equal ho)
  /*first method
     // if(a.first!=b.first){
    //     if(a.first>b.first) return true;
    //     return false;
    // }else{
    //     if(a.second<b.second) return true;
    //     return false;
    // }  */

 /*  method 2
   if(a.first!=b.first){
        if(a.first>b.first) return false;
        return true;
    }else{
        if(a.second<b.second) return false;
        return true;
    }  */


   if(a.first!=b.first){
        return a.first<b.first;//wahi cheez return krdo jo chahiye
      
    }return a.second>b.second;

}
int main(){
    int n;
    cin>>n;

    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(should_i_swap(v[i],v[j])){
    //             swap(v[i],v[j]);
    //         }
    //     }
    // }

    sort(v.begin(),v.end(),should_i_swap);
    /*inbuilt swap algo ka behaviour ulta hota h
    mtlb jab apne ko swap krwana h to false return krna hai otherwise true;*/
     cout<<endl;
 for(int i=0;i<n;i++){
     cout<<v[i].first<<" "<<v[i].second<<endl;;
    }cout<<endl;
return 0;
}