#include <bits/stdc++.h>

using namespace std;
void generate(string &s, int open, int close)
{
    if (open == 0 && close == 0)
    {
        cout << s << endl;
    }
    if (open > 0)
    {
        s.push_back('(');

                                    //    cout << "before pop  nd recursion  1 ====="
                                    //         << "  open = " << open << "  close =  " << close << "  :    " << s << endl;

        generate(s, open - 1, close);

                                    //    cout << "before pop 1 ====="
                                    //         << "  open = " << open << "  close =  " << close << "  :    " << s << endl;

         s.pop_back();                          // ye phle print krne k baad hoga pop

                                    //    cout << "after pop 1 ====="
                                    //         << "    open = " << open << "  close =  " << close << "  :      " << s << endl;
    }

    if (close > 0 && open < close)
    {
         s.push_back(')');

                                    //    cout << "before pop  nd recursion    2====="
                                            // << "   open = " << open << "  close =  " << close << "  :    " << s << endl;

         generate(s, open, close - 1);

                                    //    cout << "before pop  2 ====="
                                            // << "   open = " << open << "  close =  " << close << "  :    " << s << endl;

         s.pop_back();

                                    //    cout << "after pop  2 ====="
                                            // << "    open = " << open << "  close =  " << close << "  :     " << s << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    string s;
    generate(s, n, n);
    return 0;
}