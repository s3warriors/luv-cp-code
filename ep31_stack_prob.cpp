#include<bits/stdc++.h>

using namespace std;
unordered_map<char,int>symbols={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3},};
string  isBalanced(string s){
    stack<char>a;
    for(auto brackets :s){
    if(symbols[brackets]<0){
        a.push(brackets);
    }
    else{
        if(a.empty()) return "no";
char top=a.top();
      a.pop();     

            if(symbols[top]+symbols[brackets]!=0){
                return "no";
           
          }
      
    }
    
    }
    if(a.empty()) return "yes";
    return "no";
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        cout<<isBalanced(str)<<endl;
    }
return 0;
}