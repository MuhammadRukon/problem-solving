#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // cin>>t;
    // while(t--){
    int m, n;
    cin >> n >> m;
    int arr[n + 1][m + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int left = INT_MIN, right = INT_MIN, top = INT_MIN, bottom = INT_MIN;

            if (j == 1)
            {
                right = arr[i][j + 1];
            }
            if (i == 1)
            {
                bottom = arr[i + 1][j];
            }

            if (j == m)
            {
                left = arr[i][j - 1];
            }
            if (j == n)
            {
                top = arr[i - 1][j];
            }

            if (j > 1 && j < m)
            {
                right = arr[i][j + 1];
                left = arr[i][j - 1];
            }
            if (i > 1 && i < n)
            {
                bottom = arr[i + 1][j];
                top = arr[i - 1][j];
            }

            if (arr[i][j] > left && arr[i][j] > right > arr[i][j] > top && arr[i][j] > bottom)
            {
                arr[i][j] = max(left, max(right, max(top, bottom)));
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // }
    return 0;
}