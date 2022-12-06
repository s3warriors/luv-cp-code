#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v={1, 2 ,3, 4, 5, 6};//for vector nd array all these algorithms are of o(n) complexity
    auto it= max_element(v.begin(),v.end());
    cout<<*it<<endl;
    auto tt=min_element(v.begin(),v.end());
    cout<<*tt<<endl;
    auto ttt=accumulate(v.begin(),v.end(),0);
    cout<<ttt<<endl;
    auto iit=count(v.begin(),v.end(),2);//for set nd map these two ct nd fnd are of o(logn) complexity
    cout<<iit<<endl;
    auto fnd=find(v.begin(),v.end(),16);
    if(fnd!=v.end())
    cout<<*fnd<<endl;
    else cout<<"not found"<<endl;
    reverse(v.begin(),v.end());
    for(int i=0;i<6;i++){
cout<<v[i]<<" ";
    }

return 0;
}