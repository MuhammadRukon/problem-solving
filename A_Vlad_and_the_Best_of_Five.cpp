#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a = 0, b = 0;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (c == 'A')
            {
                a++;
            }
            if (c == 'B')
            {
                b++;
            }
        }
        if (a > b)
        {
            cout << "A";
        }
        else
        {
            cout << "B";
        }
        cout << endl;
    }

    return 0;
}
