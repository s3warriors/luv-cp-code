#include<bits/stdc++.h>

using namespace std;

int main(){





// map<pair<string,string>,vector<int>>m;
// int n;
// cin>>n;
// while(n--){
//     string fn,ln;
//     int ct;
//     cin>>fn>>ln>>ct;
//     while(ct--){
//         int x;
//         cin>>x;
//         m[{fn,ln}].push_back(x);
//     }


// }
// for(auto &pair:m){
//     auto &full_name=pair.first;
//     auto &list=pair.second;
//     cout<<full_name.first<<" "<<full_name.second<<endl;
//     cout<<list.size()<<endl;
//     for(auto &element: list){
//         cout<<element<<endl;

//     }
 
// }







    //example
    map<int,multiset<string>>m;
    int n;
    cin>>n;
    while(n--){
        int marks;
        string name;
        cin>>name>>marks;
        m[-1*marks].insert(name);//-ve marks ko map me insert krte hai
        // auto cur_it=--m.end();
        // while(true){
        //     auto &stud_name=(*cur_it).second;
        //     auto &marks=(*cur_it).first;
        //     for(auto student:stud_name){
        //         cout<<student<<" "<<marks;
        //     }
        //     if(cur_it==m.end()){
        //         break;
        //     }
        //     cur_it--;

        // }
for(auto &it:m){
 auto &stud_name=it.second;
            auto &marks=it.first;
            for(auto student:stud_name){
                cout<<student<<" "<<-1*marks;
            }
        
    }
return 0;
}