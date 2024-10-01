#include <bits/stdc++.h>
using namespace std;

int n, m;
char mat[1001][1001];
bool vis[1001][1001];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj)
{
    return ci >= 0 && ci < n && cj >= 0 && cj < m;
}

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int count = 1;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] == '.')
        {
            count += dfs(ci, cj);
        }
    }
    return count;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    int result = INT_MAX;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '.' && !vis[i][j])
            {
                found = true;
                int size = dfs(i, j);
                result = min(result, size);
            }
        }
    }

    if (!found)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << result << endl;
    }

    return 0;
}
