#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> ls;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        ls.push_back(s);
    }
    int q;
    cin >> q;
    cin.ignore();
    string position;
    string output;
    auto it = ls.end();
    while (q--)
    {
        string str;
        getline(cin, str);

        if (str.substr(0, 5) == "visit")
        {
            position = str.substr(6);
            auto tempit = find(ls.begin(), ls.end(), position);

            if (tempit == ls.end())
            {
                output = "Not Available";
            }
            else
            {
                it = find(ls.begin(), ls.end(), position);
                output = position;
            }
        }
        else if (str == "next")
        {
            if (it == prev(ls.end()))
            {
                output = "Not Available";
            }
            else
            {
                it = next(it, 1);
                output = *it;
            }
        }
        else if (str == "prev")
        {
            if (it == ls.begin())
            {
                output = "Not Available";
            }
            else
            {
                it = prev(it, 1);
                output = *it;
            }
        }
        cout << output << endl;
    }
    return 0;
}