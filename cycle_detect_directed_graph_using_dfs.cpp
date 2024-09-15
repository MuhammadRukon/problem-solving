#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
bool pathVis[N];

vector<int> adj[N];
bool ans = false;

bool dfs(int parent)
{
    pathVis[parent] = true;
    vis[parent] = true;
    for (int child : adj[parent])
    {
        if(pathVis[child])
        {
            ans = true;
        }
        if (!vis[child])
            dfs(child);
    }
    pathVis[parent] = false;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    if (ans)
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "No Cycle Detected" << endl;
    }

    return 0;
}