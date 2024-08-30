#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> que1;
    queue<string> que2;
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin, s);
        (s.substr(0, 1) != "1") ? s = s.substr(2) : s = s.substr(0, 1);
        que2.push(s);
    }

    while (!que2.empty())
    {
        if (que2.front() == "1")
        {
            if (que1.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << que1.front() << endl;
                que1.pop();
            }
            que2.pop();
        }
        else
        {

            que1.push(que2.front());
            que2.pop();
        }
    }

    return 0;
}