// what if given data is not sorted

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // sort(v.begin(),v.end());
    auto it=lower_bound(v.begin(),v.end(),5);
    auto tt=upper_bound(v.begin(),v.end(),5);
    cout<<*it<<endl;
    cout<<*tt<<endl;


//    set<int>v;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.insert(x);
//     }
    
//     // auto it=lower_bound(v.begin(),v.end(),5); //o(n ) wrong method
//     // auto tt=upper_bound(v.begin(),v.end(),5);
//     auto it=v.lower_bound(5);
//     auto tt=v.upper_bound(5);
//     cout<<*it<<endl;
//     cout<<*tt<<endl;


//  map<int,int>v;
//     for(int i=0;i<n;i++){
//         int x,y;
//         cin>>x>>y;
//         v.insert({x,y});
//     }
    
//     // auto it=lower_bound(v.begin(),v.end(),5); //o(n ) wrong method
//     // auto tt=upper_bound(v.begin(),v.end(),5);
//     auto it=v.lower_bound(5);//key deni hoti h input me
//     auto tt=v.upper_bound(5);
//     cout<<it->first<<" "<<(*it).second<<endl;
//     cout<<tt->first<<" "<<(*tt).second<<endl;

return 0;
}