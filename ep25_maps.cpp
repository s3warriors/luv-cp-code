#include<bits/stdc++.h>

using namespace std;
void printMap( map<int,string>&m){
  cout<<m.size()<<endl;
for(auto it:m){   //o(n*log(n))
    cout<<it.first<<" "<<it.second<<endl;}}  //o(log(n))

int main(){
    /* map-------->>map is a data type which store key value pairs in ordered manner */
   map<int,string>m;
   m[1]="abc";  //o(log(n)) ,but if key is also a string then o(s.size()*log(n));
   m[3]="fghjk";
   m[2]="kjhgf";
 m.insert({5,"oiuyt"});
   m[2]="gjk";  //map keys are unique so we can't excess 2 values on same key .the value which is stored later is excessed 

//  map<int,string>:: iterator it; 
// for(it=m.begin(); it!= m.end();it++){
//     cout<<(*it).first<<" "<<(*it).second<<endl;}
//     cout<<endl;
 



//*********functions of map
auto it=m.find(3); 
if(it==m.end()){
  cout<<"no solution"<<endl;
}
else
  cout<<it->first<<" "<<it->second<<endl;

  cout<<endl;

  m.erase(3); //if we want to erase one pair
      //m.erase(it)..........>>>>> erase function take both key and iterator as input


printMap(m);

cout<<endl;

m.clear();  //ye pura map clear kr deta h
printMap(m);



return 0;
}