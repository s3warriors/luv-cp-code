#include <bits/stdc++.h>

using namespace std;

/* //************vector of pair
// void printvec(vector<pair<int,int>>v){
// /* yahan ye vector<pair<int,int>>v bhi copy hi bani h agar actual vector
 lana ho to &v use krna pdega */

//     cout<<"size: "<<v.size()<<endl;
//     for(int i=0;i<v.size();i++){
//          cout<<v[i].first<<" "<<v[i].second<<endl;;

//     }
//     cout<<endl;
// }

//************vector of array
// void printvec(vector<int> &v)
// {
//     cout << "size: " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }


//************vector of array
void printvec( vector<int> v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}



int main()
{

    /* //************vector of pair

        vector<pair<int,int>>v;     //= {{1,2},{3,4}};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        // v.push_back(make_pair(x,y));
    }
    printvec(v);

                            //    //**********input
                            //    3
                            //    1 2
                            //    2 3
                            //    3 4
                            //    //**********output
                            //    size: 3
                            //          1 2
                            //          2 3
                            //          3 4 */

    //************vector of array

//   /* 
    int n;
    cin >> n;
    vector<int> v[n];    //n vector banenge array k
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int y;
            cin >> y;
            v[i].push_back(y);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printvec(v[i]);
    }
    cout<<v[0][1];
       //0th vector me 1st index par element konsa h 
                            //    //**********input
                            // 2
                            // 3 
                            // 1 2 3
                            // 2 
                            // 1 2
                            //    //**********output
                            // size: 3
                            // 1 2 3 
                            // size: 2
                            // 1 2 
                            // 2 */
//  /*    //************vector of vector

//  int n; /* n==v.size() */
//     cin >> n;
//     vector<vector<int>> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         vector<int>temp;/* kyunki v[i] to h hi nhi isliye ek temp vector me value store krwani pdegi */
   
//     // v.push_back(vector<int>());/* khali vector declare kr diya to temp ki jrurt hi nhi h */
//         for (int j = 0; j < x; j++)
//         {
//             int y;
//             cin >> y;
//           temp.push_back(y);
//         //   v[i].push_back(y);
//         }
//         v.push_back(temp);
//     }
//     v[0].push_back(10);
//     // v.push_back(vector<int> ());
//     for (int i = 0; i < n; i++)
//     {
//         printvec(v[i]);
//     }
//     cout<<v[0][1];
//  */









    return 0;
}
