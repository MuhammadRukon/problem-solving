#include <bits/stdc++.h>
using namespace std;

int m, n;
char a[1000][1000];
bool vis[1000][1000];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj){
    if (ci < 0 || ci >= m || cj < 0 || cj >= n)
        return false;
    return true;
}

void dfs(int si, int sj){
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main(){
    int count = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (a[i][j] == '.' && !vis[i][j])
            {
                count++;
                dfs(i, j);
            }
        }
    }

    cout << count << endl;

    return 0;
}