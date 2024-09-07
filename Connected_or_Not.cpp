#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int matrix[n][n];
    memset(matrix, 0, sizeof(matrix));

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        matrix[a][b] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (matrix[a][b] == 1 || a == b)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
