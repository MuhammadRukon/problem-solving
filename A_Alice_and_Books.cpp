#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        float div = 0, sum = 0;
        cin >> x;

        float arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        div = ceil(x / 2.00);
        int d = div;
        cout << arr[d-1]+arr[x-1] << endl;
    }
    return 0;
}