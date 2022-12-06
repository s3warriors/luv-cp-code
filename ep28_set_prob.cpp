#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long>bags;
        for(int i=0;i<n;i++){
            int  candy_count;
            cin>>candy_count;
            bags.insert(candy_count);
        }
        long long total=0;
        while(k--){
  auto last_it= *(--bags.end());
   long long int candi_ct=  (last_it);
   total+=candi_ct;
   bags.erase(last_it);
   bags.insert(candi_ct/2);


        }
        cout<<total<<endl;
    }



return 0;
}