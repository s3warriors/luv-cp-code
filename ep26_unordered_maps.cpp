#include<bits/stdc++.h>

using namespace std;
void print_UMap(unordered_map<int,string>&m){
  cout<<m.size()<<endl;
for(auto it:m){   //o(n*1)
    cout<<it.first<<" "<<it.second<<endl;}}  //o(1)

int main(){


/* unordered map differ from map in these 3 properties
1.inbuilt implementation---->>>>>hash table use hoti hai wahan red black trees  use hote h
2.time complexity--------->>>>>  o(1) uski o(log(n)) hoti h
3.valid key datatype------>>>> this is only valid for simple data type like int ,double,string not valid for complex like pair ,set etc.... */





    /*unordered map-------->>it is a data type which store key value pairs but not in ordered manner */
 unordered_map<int,string>m;
   m[1]="abc";  //o(1)) ,but if key is also a string then o(s.size()*1);
   m[3]="fghjk";
   m[2]="kjhgf";
 m.insert({5,"oiuyt"});
   m[2]="gjk";  


print_UMap(m);



//*********functions of unordered_map
auto it=m.find(3); 
if(it==m.end()){
  cout<<"no solution"<<endl;
}
else
  cout<<it->first<<" "<<it->second<<endl;

  cout<<endl;

  m.erase(3); //if we want to erase one pair
      //m.erase(it)..........>>>>> erase function take both key and iterator as input


print_UMap(m);

cout<<endl;

m.clear();  //ye pura map clear kr deta h
print_UMap(m);


/* multimap
syntax:: multimap<int,string>m;
used for store multiple value at one key;;
or
map<int,vector<string>>m; */

return 0;
}