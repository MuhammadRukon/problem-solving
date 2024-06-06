#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((c > b && b > a))
        {
            cout << "STAIR\n";
        }
        else if (b > a && b > c)
        {
            cout << "PEAK\n";
        }
        else
        {
            cout << "NONE\n";
        }
    }

    return 0;
}
