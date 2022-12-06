//max distance btana h jahan cowsapan baandh ske 


//luv

#include <bits/stdc++.h>

using namespace std;
const long long N = 1e5 + 10;
int stalls, cows;
long long arr[N];

bool canPlaceCows(int minDistance)
{
    int lastpos = -1;
    int cow_ct = cows;
    for (int i = 0; i < stalls; i++)
    {
        if (((arr[i] - lastpos) >= minDistance) || lastpos == -1)
        {
            cow_ct--;
            lastpos = arr[i];
        }
        if (cow_ct == 0)
            break;
    }
    return cow_ct == 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> stalls >> cows;
        for (int i = 0; i < stalls; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + stalls);
        long long s = 0, e = 1e9, mid;
        while (e - s > 1)
        {
            mid = (s + e) / 2;
            if (canPlaceCows(mid))
                s = mid;
            else
                e = mid - 1;
        }

        if (canPlaceCows(e))
            cout << e << endl; // because here we need max height so we first try for e not s
        else if (canPlaceCows(s))
            cout << s << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}

/*//babbar
bool isPossible(vector<int> &stalls, int k,int mid){
    int cowCount =1;
    int lastPOs=stalls[0];

    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastPOs>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPOs=stalls[i];
        }
    } return false;


}

int aggressiveCows(vector<int> &stalls, int k)
{ sort(stalls.begin(),stalls.end());
    int i=0;
    int  maxi=-1;
    for(int i=0;i<stalls.size();i++){
    maxi=	max(maxi,stalls[i]);
        }
    int j=maxi;
 int ans=-1;
    int mid=i+(j-i)/2;
    while(i<=j){
        if(isPossible(stalls,k,mid)){
            ans=mid;
            i=mid+1;

        }
        else{
            j=mid-1;
        }mid=i+(j-i)/2;
    }return ans;
} */