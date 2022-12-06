/* #include<bits/stdc++.h>

using namespace std;
const int N=1e6+10;
long long m;
int n;
long long arr[N];

bool issufficientwood(long long h){
    long long wood=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=h) wood+=(arr[i]-h);
    }
    return wood>=m;  //hoga to true wrna false
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long s=0,e=1e9,mid;
    while(e-s>1){
        mid=(s+e)/2;
        if(issufficientwood(mid))  s=mid;
        else e=mid-1;}
        
        if(issufficientwood(e)) cout<<e<<endl;  //because here we need max height so we first try for e not s
        else if(issufficientwood(s)) cout<<s<<endl;
        else cout<< -1 <<endl;
   
return 0;
} */




//acuracy jyada ho jayegi isse

#include<bits/stdc++.h>

using namespace std;
const int N=1e6+10;
////////////
double m;
int n;
double arr[N];

bool issufficientwood(double h){
    double wood=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=h) wood+=(arr[i]-h);
    }
    return wood>=m;  //hoga to true wrna false
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    double s=0,e=1e9,mid;
    while(e-s>1e-4){
        mid=(s+e)/2;
        if(issufficientwood(mid))  s=mid;
        else e=mid-1e-4;}
        
        if(issufficientwood(e)) cout<<e<<endl;  //because here we need max height so we first try for e not s
        else if(issufficientwood(s)) cout<<s<<endl;
        else cout<< -1 <<endl;
   
return 0;
}