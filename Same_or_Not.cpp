#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> a;
    queue<int> b;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        a.push(input);
    }
    for (int i = 0; i < m; i++)
    {
        int input;
        cin >> input;
        b.push(input);
    }
    if (n != m)
    {
        flag = 1;
    }
    else
    {
        while (!a.empty())
        {
            if (a.top() != b.front())
            {
                flag = 1;
                break;
            }
            a.pop();
            b.pop();
        }
    }
    flag ? cout << "NO" << endl : cout << "YES" << endl;
    return 0;
}