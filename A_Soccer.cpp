#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 > y1)
        {
            if (x2 < y2)
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
        if (x1 < y1)
        {
            if (x2 > y2)
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}
