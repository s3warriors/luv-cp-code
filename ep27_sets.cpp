#include <bits/stdc++.h>

using namespace std;

void printSet(set<string> &s)
{
    cout << s.size() << endl;

    for (auto it : s)
    { // o(n*log(n))
        cout << (it) << endl;
        ; // o(log(n))
    }

    // for(auto it=s.begin();it!=s.end();it++){   //o(n*log(n))
    //     cout<<(*it)<<endl;;
    //     }

    // for(string value:s){
    //     cout<<value<<endl;   //o(log(n))
    //     }
}

// void print_USet(unordered_set<string> &s)
// {
//     cout << s.size() << endl;

//     for (auto it : s)             // o(n*1)
//     { 
//         cout << (it) << endl;    // o(1)
//     }

// }

// void print_MSet(multiset<string> &s)
// {
//     cout << s.size() << endl;

//     for (auto it : s)             // o(n*1)
//     { 
//         cout << (it) << endl;    // o(1)
//     }

// }

int main()
{
    /* set-------->>set is a data type which stores collection of elements in ordered manner */
    set<string> s;
    s.insert("abc");
    s.insert("cab");
    s.insert("bac");
    s.insert("abcd");
    printSet(s);

    // sets keys are unique so we can't excess 2 values on same key .the value which is stored later is excessed

    // //*********functions of sets
    cout << "\n s.find(abc) se kya hoga ,ye hoga" << endl;
    auto it = s.find("abc");
    if (it == s.end())
    {
        cout<< "no solution" << endl;
    }
    else
        cout<< *it <<"\n"<< endl;

    cout << "s.erase(abc) se kya hoga ,ye hoga" << endl;
    // s.erase(it)..........>>>>> erase function take both key and iterator as input
    s.erase("abc"); // if we want to erase one element

    printSet(s);
    cout << "\n";

    cout << "s.clear() se kya hoga ,ye hoga" << endl;
    s.clear(); // ye pura set clear kr deta h

    printSet(s);
    cout << "\n";
  
  
  
  
  
  //**************unordered set
  
  
    /* unordered_set-------->>it is a data type which stores collection of elements but not in ordered manner */
    // unordered_set<string> s;
    // s.insert("abc");
    // s.insert("cab");
    // s.insert("bac");
    // s.insert("abcd");
    // print_USet(s);

    // // sets keys are unique so we can't excess 2 values on same key .the value which is stored later is excessed

    // // //*********functions of u_set
    // cout << "\n s.find(abc) se kya hoga ,ye hoga" << endl;
    // auto it = s.find("abc");
    // if (it == s.end())
    // {
    //     cout<< "no solution" << endl;
    // }
    // else
    //     cout<< *it <<"\n"<< endl;

    // cout << "s.erase(abc) se kya hoga ,ye hoga" << endl;
    // // s.erase(it)..........>>>>> erase function take both key and iterator as input
    // s.erase("abc"); // if we want to erase one element

    // print_USet(s);;
    // cout << "\n";

    // cout << "s.clear() se kya hoga ,ye hoga" << endl;
    // s.clear(); // ye pura set clear kr deta h

    // print_USet(s);;
    // cout << "\n";



    //*******multisets
/* multisets-------->>it is a data type which stores collection of elements as well as duplicates */
    // multiset<string> s;
    // s.insert("abc");
    // s.insert("cab");
    // s.insert("abc");
    // s.insert("abcd");
    // print_MSet(s);

    // // sets keys are unique so we can't excess 2 values on same key .the value which is stored later is excessed

    // // //*********functions of multisets

    // cout << "\n s.find(abc) se kya hoga ,ye hoga" << endl;
    // auto it = s.find("abc");
    // if (it == s.end())
    // {
    //     cout<< "no solution" << endl;
    // }
    // else
    //     cout<< *it <<"\n"<< endl;   //pahle wale ka aayega

    // cout << "s.erase(abc) se kya hoga ,ye hoga" << endl;
    // // s.erase(it)..........>>>>> isse sirf pahle wala jayega
    // s.erase("abc"); // isse abc wale saare chale jayenge

    // print_MSet(s);;
    // cout << "\n";

    // cout << "s.clear() se kya hoga ,ye hoga" << endl;
    // s.clear(); // ye pura set clear kr deta h

    // print_MSet(s);;
    // cout << "\n";

    return 0;
}