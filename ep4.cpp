#include <iostream>

using namespace std;
// int y=0; /* global scope use anywhere in the program */
int main()
{
    // int a = 2;/*  a local scope use only in main directory */
    // int b = 3;
    // int c= 4;
    // cout << (a == b)<<endl;
    // cout << (a != b)<<endl;
    // cout<<((b>a)&&(c<b))<<endl;
    // cout<<((b>a)||(c<b))<<endl;

    // int n;
    // cin >> n;

    // if (n % 3 == 0)
    // {
    //     cout << n;
    // int x=0;/* also a local scope only use in this if statement */
    // }
    // else if (n % 2 == 0)
    // {
    //     cout << n - 2;
    // }
    // else
    // {
    //     cout << 0;
    // }



     /********loops***************/
    // 1.. while (/* condition */)
    // {
    //     /* code */
    // }
     
    // 2..for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    
    // 3.....do
    // {
    //     /* code */
    // } while (/* condition */);
//    int i=1;
//     while(i<10){
//         cout<<++i<<endl;
//         i++;}
    // } 

// for(int i=1;i<10;i++){
//     cout<<i<<endl;
// }
    // int n;
    // cin>>n;

    // for(int j=1;j<=n;j++){
    //     for(int i=1;i<=j;i++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

/* break----->>> jis loop me h usse bahar nikal jayega
        continue------>>>>>>>> sirf us condition se bahar nikal jayega */


     /* example----->>>>>sum of digits */   

    int n;
    cin>>n;
    int sum=0;
    while(n>0){
     int i=n%10;
     sum+=i;
     n=n/10;}
     cout<<sum;

    return 0;
}