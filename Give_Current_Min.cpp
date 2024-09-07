#include <bits/stdc++.h>
using namespace std;
#define khali cout << "Empty" << endl
int main()
{
    int n;
    cin >> n;
    multiset<int> numSet;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numSet.insert(x);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int val;
            cin >> val;
            numSet.insert(val);
            cout << *numSet.begin() << endl;
        }
        else if (cmd == 1)
        {
            (!numSet.empty()) ? cout << *numSet.begin() << endl : khali;
        }
        else if (cmd == 2)
        {
            if (!numSet.empty())
            {
                numSet.erase(numSet.begin());
                (!numSet.empty()) ? cout << *numSet.begin() << endl : khali;
            }
            else
            {
                khali;
            }
        }
    }
    return 0;
}