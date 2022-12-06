#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> all_subsets(vector<int>nums){
    int n = nums.size();
    int subset_ct = (1 << n);
    vector<vector<int>> subsets;
    for (int mask = 0; mask < subset_ct;mask++){
        vector<int> subset;
        for (int i = 0; i < n;i++){     //yhn bit mask ka & le rhe h vector k element ka nahi
if(mask&(1<<i))
    subset.push_back(nums[i]);
        }
        subsets.push_back(subset);
    }
    return subsets;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];

    }
    for(auto subset:all_subsets(v)){
        for(auto ele:subset){
            cout << ele << " ";
        }
        cout << endl;
    }
        return 0;
}