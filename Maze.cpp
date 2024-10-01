#include <bits/stdc++.h>
using namespace std;

bool vis[1001][1001];
char a[1001][1001];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;
bool valid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}
map<pair<int, int>, pair<int, int>> par;

void bfs(int si, int sj)
{
    vis[si][sj] = true;

    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = node.first + d[i].first;
            int cj = node.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && (a[ci][cj] == '.' || a[ci][cj] == 'D'))
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                ::par[{ci, cj}] = {node.first, node.second};
                if (a[ci][cj] == 'D')
                    return;
            }
        }
    }
}

int main()
{
    int si, sj, di, dj;
    memset(vis, false, sizeof(vis));
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (a[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    bfs(si, sj);
    if (vis[di][dj])
    {
        pair<int, int> cur = {di, dj};

        while (cur != make_pair(si, sj))
        {
            if (a[cur.first][cur.second] != 'D')
            {
                if (a[cur.first][cur.second] == 'R')
                {
                    continue;
                }
                a[cur.first][cur.second] = 'X';
            }
            cur = par[cur];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
