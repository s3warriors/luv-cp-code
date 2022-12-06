#include<bits/stdc++.h>

using namespace std;
void printvec(vector<int>v)/* yahan ye vector<int>v bhi copy hi bani h agar actual vector
lana ho to &v use krna pdega */
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
cout<<v[i]<<" ";

    }
    cout<<endl;
}

int main(){




    //*********pairs
   /*  pair<int,string> p;
    // p=make_pair(2,"abcd");
    p={2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl; */

 
    //  // pair<int,string> p1=p; /* ese krne par pair ki copy jati h same variable wala hi scene h */
    // // p1.first=3;
    // // cout<<p.first<<" "<<p.second<<endl;

    // pair<int,string> &p1=p;
    // p1.first=3;
    // cin>>p1.first; /* we can take input in pair like this */
    // cout<<p.first<<" "<<p.second<<endl;  

/* 
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>arr[3];
    arr[0]={1,2};
    arr[1]={2,3};
    arr[2]={3,4};
    swap(arr[0],arr[2]);
for(int i=0;i<3;i++){
    cout<<arr[i].first<<" "<<arr[i].second<<endl;
}
        */







     //**********vectors------->>>array of dynamic size  
  /*    vector<int>v;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         int x;
         cin>>x;
    //  printvec(v);
                               //*************** push_back o(1)complexity --->>>>last me add krta hai
         v.push_back(x); 
     }
     printvec(v);
                                 // ***** input:
                                 //  5
                                 // 1 2 3 4 5

                                //     ******* output: 
                                // size: 5
                                // 1 2 3 4 5   
                                      */




/* //*********** case 1---->>>>>>>>
//  vector<int>v(10);
//  printvec(v);

                                  //     ******* output: 
                                  // size: 10
                                  // 0 0 0 0 0 0 0 0 0 0  */


/* //*************** case 2---->>>>>>>>
//  vector<int>p(10,3);
//  p.push_back(7);
//  printvec(p);
//                     //   *************** pop_back o(1)complexity --->>>>last se 1 remove  krta hai
//  p.pop_back();
//  printvec(p);

                                  //     ******* output: 
                                //   size: 11
                                //   3 3 3 3 3 3 3 3 3 3 7 
                                //   size: 10
                                //   3 3 3 3 3 3 3 3 3 3   */

/*  //*********** case 3---->>>>>>>>
 vector<int>v;
 v.push_back(7);
 v.push_back(6);

 vector<int>v2=v;             //****copy bni hai (&v2 use kro agar copy nhi bnani h to), 
                             //  one by one copy hota h to complexity o(n)hoti h
 v2.push_back(4);

 printvec(v);
 printvec(v2);
                                  //     ******* output: 
                            //   size: 2
                            //   7 6 
                            //   size: 3
                            //   7 6 4  
 */


return 0;
}