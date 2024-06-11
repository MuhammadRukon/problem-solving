#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int x = 2;
        int sum = 0;
        int prev = 0;
        int result = 2;
        while (x <= n)
        {
            sum = 0;
            for (int j = 1; j <= n; j++)
            {
                if (j * x <= n)
                {
                    sum = sum + j * x;
                }
            }
            if (sum > prev)
            {
                prev = sum;
                result = x;
            }
            x++;
        }

        cout << result << endl;
    }

    return 0;
}