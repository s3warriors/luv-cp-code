#include<bits/stdc++.h>

using namespace std;

int main(){
/*     vector<int>v={2,3,4,5};
    // syntax  
    vector<int> :: iterator tt,pp;
    tt=v.begin();   // means it represent that iterator which points first index 
    pp=v.end();  // means it represent that iterator which points last +1 index
    // cout<<*tt<<endl;
    // cout<<*(tt+1)<<endl;   // this will print next element 
    cout<<*(pp)<<endl;

    for(tt=v.begin();tt<v.end();tt++){
    cout<<*tt<<endl;

    } */

    /* difference b/w tt++ and tt+1  ??
   in case of vector there is no difference b/w tt++/tt+1 
   bcoz vector have continuous memory allocation
    but in case of map and set tt++ represent next iterator and tt+1 represent next location  */

vector<pair<int,int>>v ={{2,3},{3,4},{5,6}};
vector<pair<int,int>> :: iterator tt; //ye jo iterator tt h wo pair ko point krega iska use ham int ko point krne k liye nhi kr skte
for(tt=v.begin();tt<v.end();tt++){
    cout<<(*tt).first<<" "<<(*tt).second<<endl;
    cout<<  tt->first   <<" "<<  tt->second  <<endl;}

return 0;
}