#include <bits/stdc++.h>
using namespace std;
const long long infinity = 1e18 + 5;
int main()
{
    long long n, e;
    cin >> n >> e;
    long long adj[n + 5][n + 5];
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            adj[i][j] = infinity;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], c);
    }
    for (long long k = 1; k <= n; k++)
    {
        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {

                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    long long q;
    cin >> q;
    while (q--)
    {
        long long x, y;
        cin >> x >> y;
        if (adj[x][y] == infinity)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << adj[x][y] << endl;
        }
    }
    return 0;
}