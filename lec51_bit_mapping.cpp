#include <bits/stdc++.h>

using namespace std;

void printBinary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1) << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        int num_workers;
        cin >> num_workers;
        int mask = 0;
        for(int j = 0; j < num_workers;j++) {
            int days;
        cin >> days;
        mask = (mask | (1 << days));
        }
        v[i] = mask;

        // cout << v[i] << endl;
        // printBinary(v[i]);
    }
    int person1 = -1;
    int person2 = -1;
    int max_days = 0;
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            int intersection = v[i] & v[j];
            int common_days = __builtin_popcount(intersection);
            if(common_days>max_days) {
                max_days = common_days;
                person1 = i;
                person2 = j;
            }
        }
    }

    cout << person1 << " " << person2 << " " << max_days << endl;

    return 0;
}