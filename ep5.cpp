#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str = "hello";
    // string strl;
    // cin>>strl;
    // string result = str+strl;
    // cout<<result<<endl;
    // if (str==strl){
    //     cout<<"eq"<<endl;
    // }else{cout<<"nq"<<endl;}

    //************ str[index]
    // str[0] = 'a';/* character hota h //////// we can also change the value of string elements like this */
    // cout << "elememt at 0 index in string str is    "<<str[0] << endl;
    // cout <<"string after manupulation is   "<< str << endl;
    // cout <<"size of string is "<< str.size() << endl;
    //     cout << "string elements"<< endl;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i] << endl;
    // }


    /* ************getline if we want string with same spacing as given in the input*/
    // string str1,str2;
    // getline(cin,str1);
    // getline(cin,str2);
    // cout<<str1<<"\n"<<str2<<endl;


    // int t;
    // cin>>t;
    // /* sample input in below lines ? denotes cursor position(only for understanding not real)
    //  ? 3(t){after first cin}?
    //    {after one getline}  ?abc  def
    //    {after 2nd getline }?ghdfjfj gjgjh ddgdgfh
    //    {after 3rd getline} ?(so this input cannot be used without cin.ignore())gdhjk fggh jjj 
    //     */
    // cin.ignore();/* ignores newline and spaces */
    // while(t--){
    //     string s;
    //     getline(cin,s);
    //     cout<<s<<endl;
    // }

// ******reversing a string
    // string str;
    // cin>>str;
    // string str_rev;
    // // cout<<str.size();
    
    // for(int i= str.size()-1;i>=0;i--){
    //     // str_rev+= str[i];
    //     str_rev.push_back(str[i]);/* best way for reversing any given string using "push_back(....)" */
    // }

    //    cout<<str_rev;


 /*********** check our string is palindrome or not  */
 //method 1
       
    // string str;
    // cin>>str;
    // string str_rev;
    // // cout<<str.size();
    
    // for(int i= str.size()-1;i>=0;i--){
    //     // str_rev+= str[i];
    //     str_rev.push_back(str[i]);/* best way for reversing any given string using "push_back(....)" */
    // }

    //  if(str==str_rev){
    //      cout<<"yes"<<endl;
    //  } else{
    //      cout<<"no"<<endl;
    //  }

    //method 2 apply loop foR HALF STRING

   
//   string isPalindrome(string S )  { 

//     for(int i= 0;i<S.size()/2;i++){
//         if(S[i]!=S[S.size()-1-i]){
//             return "no";
//         }}
//        return "yes";}

     
// int main()
// {
//     string s;    
//    cin>>s;
// cout<<isPalindrome(s)<<endl;

/* for large number like 10^100 we have to use strings */
       string s;
       cin>>s;
     int a = s[s.size()-1]/* ascii value for integer value we have to subtract ascii value of 0 */-'0';
     cout<<s[s.size()-1]<<endl;  /* this will give output in char */
     cout<<(int)s[s.size()-1]<<endl;  /* this wii in ascii */
     cout<<a<<endl;  /* this wii in integer */
       
       return 0;


}


