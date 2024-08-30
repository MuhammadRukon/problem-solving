#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> ls;
    void push(int val)
    {
        ls.push_back(val);
    }
    void pop()
    {
        ls.pop_back();
    }
    bool empty()
    {
        return ls.size() == 0;
    }
    int top()
    {
        return ls.back();
    }
};
class myQueue
{
public:
    list<int> ls;
    void push(int val)
    {
        ls.push_back(val);
    }
    void pop()
    {
        ls.pop_front();
    }
    bool empty()
    {
        return ls.size() == 0;
    }
    int front()
    {
        return ls.front();
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    myStack a;
    myQueue b;
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