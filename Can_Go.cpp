#include <bits/stdc++.h>
using namespace std;

int n, m, si, sj;
char a[1000][1000];
bool vis[1000][1000];

bool reached = false;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    if (a[si][sj] == 'B')
    {
        reached = true;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && vis[ci][cj] == false && a[ci][cj] != '#')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    reached ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}