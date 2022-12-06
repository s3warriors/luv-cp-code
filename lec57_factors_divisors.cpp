#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;


   { //TODO brute force
    int count = 0;
    int sum = 0;
    for (int i = 1; i <=n;i++){
        if(n%i==0){
            cout << i << endl;
            count++;
            sum += i;
        }
    }
    cout << count << " " << sum << endl;}




   {//TODO sqrt method
     int count = 0;
    int sum = 0;
    for (int i = 1; i*i <= n;i++){
        if(n%i==0){
            cout << i << " "<<n/i<<endl;
            count+=1;
            sum += i;
            if(n/i!=i){
                count += 1;
                sum += (n /i);
            }
        }
    }
    cout << count << " " << sum << endl;}

    

    return 0;
}