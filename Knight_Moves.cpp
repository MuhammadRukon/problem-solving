#include <bits/stdc++.h>
using namespace std;
bool vis[101][101];
int dis[101][101];
vector<pair<int, int>> d = {{1, 2}, {-1, 2}, {1, -2}, {-1, -2}, {-2, 1}, {-2, -1}, {2, 1}, {2, -1}};

int n, m;
char a[101][101];
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nIn, mIn;
        cin >> nIn >> mIn;
        n = nIn;
        m = mIn;

        int si, sj, di, dj;
        cin >> si >> sj;
        cin >> di >> dj;
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        bfs(si, sj);
        cout << dis[di][dj] << endl;
    }
    return 0;
}