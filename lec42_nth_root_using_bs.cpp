#include <bits/stdc++.h>

using namespace std;
double accuracy = 1e-13;

double multiply(double a,double b){
double ans=1;
    while(b--){
        ans*=a;
    }
    return ans;
}

double nthroot(double x ,double n)
{
    double s = 1;
 
    double e = x;
    while (e - s > accuracy)
    {
        double mid = (s + e) / 2;
        if (multiply(mid,n) < x)
        {
            s = mid;
        }
        else
        {
            e = mid;
        }
    }
    return e;
}

int main()
{
    //TODO nth root 
    double n;
    cin >> n;
     double p;
    cin>>p;
    cout << setprecision(8)<<nthroot(n,p) << endl;
    cout << setprecision(8)<<pow(n,1.0/p) << endl;






    return 0;
}