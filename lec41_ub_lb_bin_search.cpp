#include <bits/stdc++.h>

using namespace std;


// TODO lb using bin_search      ya same ya usse bada ya -1
int lb(vector<int> v,  int p)
{
    int s = 0;
    int e =v.size() - 1;
    while (s<e)
    {
        int mid = (s + e) / 2;
        if (v[mid] < p){
            s = mid + 1;
            // cout<<s<<" "<<mid<<endl;
            }
        else
        {
            e = mid;
            // cout<<e<<" "<<mid<<endl;
        }
    }

        if (v[s] >= p)
            return s;
       if (v[e] >= p)
            return e;
        
            return -1;
}




// TODO ub using bin_search      ya usse bada ya -1
int ub(vector<int> v,  int p)
{
    int s = 0;
    int e =v.size() - 1;
    while (s<e)
    {
        int mid = (s + e) / 2;
        if (v[mid] <= p){
            s = mid + 1;
            // cout<<s<<" "<<mid<<endl;
            }
        else
        {
            e = mid;
            // cout<<e<<" "<<mid<<endl;
        }
    }

        if (v[s] > p)
            return s;
       if (v[e] > p)
            return e;
        
            return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int p;
    cin >> p;
    cout << lb(v, p) <<" "<<v[lb(v,p)]<< endl;
    cout << ub(v, p) <<" "<<v[ub(v,p)]<< endl;
    return 0;
}