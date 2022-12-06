#include <bits/stdc++.h>

using namespace std;

//range bASED LOOPS
//auto keyword

int main()
{
/* method 1 */
cout<<"v by method 1"<<endl;
    vector<int> v = {2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "<<endl;;
    }
   
/* method 2 */
cout<<"v by method 2"<<endl;
    vector<int>::iterator tt, pp;
    for (tt = v.begin(); tt < v.end(); tt++)
    {
        cout << *tt << endl;
    }

/* method 3 */
cout<<"v by method 3"<<endl;
    // vector<int> :: iterator tt,pp; /* auto keyword use krne k baad is line ki jrurt nhi h */
    for (auto tt = v.begin(); tt < v.end(); tt++)
    {
        cout << *tt << endl;
    }

/* method 4 */
cout<<"v by method 4"<<endl;
    for (auto &tt :v)
    {
        cout << tt << endl;
    }

/* method 5 */
cout<<"v by method 5"<<endl;
    for (int &value : v)
    {
        // v[3]={6};
        cout << value << " "<<endl;
    }





cout<<"v1 by method 1"<<endl;
   vector<pair<int,int>>v1 ={{2,3},{3,4},{5,6}};
/* method 1 */
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i].first << " "<<v1[i].second<<endl;
    }

/* method 2 */
cout<<"v1 by method 2"<<endl;
vector<pair<int,int>> :: iterator it; 
for(it=v1.begin();it<v1.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;}

/* method 3 */
cout<<"v1 by method 3"<<endl;
//    vector<pair<int,int>> :: iterator it;       not required
for(auto it=v1.begin();it<v1.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;}

/* method 4 */


cout<<"v1 by method 4"<<endl;
    for (auto &tt : v1)
    {
        cout << tt.first<<" " <<tt.second <<endl;
    }
/* method 5 */
cout<<"v1 by method 5"<<endl;
               // for (pair<int,int> value : v1)
    for (pair<int,int> value : v1)
    {
        cout << value.first << " "<<value.second<<endl;
    }

/* method 6 */
cout<<"v1 by method 6"<<endl;
               // for (pair<int,int> value : v1)
    for (auto value : v1)
    {
        cout << value.first << " "<<value.second<<endl;
    }

    return 0;
}