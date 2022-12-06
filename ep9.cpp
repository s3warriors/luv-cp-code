#include<bits/stdc++.h>

using namespace std;

int main(){
    int a='a';
    char b=87;
    char c= 123456;/* overflow bcoz char cant store values which are larger than 2^8-1 so it takes last bits value from given integer value 123456 and perform action on this  value */
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
return 0;
}