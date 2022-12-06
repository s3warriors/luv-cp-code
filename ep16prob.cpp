#include<bits/stdc++.h>

using namespace std;
const int N=1e5+10;
int hsh[N][26];

int main(){
   /*only valid for short values
   
   
   
     int t;
    cin>>t;
    while(t--){

    int n,q;
    cin>>n>>q;
  string s;
    cin>>s;
    while(q--){
        int l,r;
        cin>>l>>r;
l--,r--;
for(int i=l;i<=r;i++){
    hsh[s[i]-'a']++;
}
int oddcount=0;
for(int i=0;i<26;i++){
if(hsh[i]%2!=0){
oddcount++;
}    
}
if(oddcount>1){
    cout<<"NO"<<endl;
}
else
cout<<"yes"<<endl;
    }
    }
 */


    /* method  2.... */
    int t;
    cin>>t;
    while(t--){ 
        for(int i=0;i<26;i++){
            for(int j=0;j<N;j++){
            
            
            hsh[j][i]=0;
        }}

    int n,q;
    cin>>n>>q;
  string s;
    cin>>s;
    for(int i=0;i<n;i++){
        hsh[i+1][s[i]-'a']++;   /* i+1 isliye likha kyunki prefix sum me 1 se start krna acha rhta h */
    }
    for(int i=0;i<26;i++){
        for(int j=1;j<=n;j++){
hsh[j][i]+=hsh[j-1][i];
        }

    while(q--){

    }
        int l,r;
        cin>>l>>r;

int oddcount=0;
for(int i=0;i<26;i++){
    int charct=hsh[r][i]-hsh[l-1][i];
    if(charct%2!=0){
        oddcount++;
    }
}
if(oddcount>1){
    cout<<"NO"<<endl;
}
else
cout<<"yes"<<endl;
    }
    }
return 0;
}