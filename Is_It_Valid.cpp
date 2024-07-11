#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> stk;
        queue<int> que;
        for (char i : s)
        {
            que.push(i - 48);
        }

        while (!que.empty())
        {
            if (stk.empty())
            {
                stk.push(que.front());
                que.pop();
            }
            else
            {
                if ((que.front() == 0 && stk.top() == 1) || (que.front() == 1 && stk.top() == 0))
                {
                    stk.pop();
                    que.pop();
                }
                else
                {
                    stk.push(que.front());
                    que.pop();
                }
            }
        }
        stk.empty() ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}