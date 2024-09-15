#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, e;
    cin >> n >> e;
    long long adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }
    int k = 0;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            (adj[i][j] == INT_MAX) ? cout << "INF " << " " : cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (adj[i][i] < 0)
        {
            cout << "Cycle Detected";
            break;
        }
    }
    return 0;
}