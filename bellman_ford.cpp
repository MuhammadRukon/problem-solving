#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, c;

    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u, v, c));
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (Edge edge : edgeList)
        {
            // cout << edge.u << " " << edge.v << " " << edge.c << endl;
            int u, v, c;
            u = edge.u;
            v = edge.v;
            c = edge.c;
            if (dis[u] < INT_MAX, dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool flag = false;
    for (Edge edge : edgeList)
    {
        // cout << edge.u << " " << edge.v << " " << edge.c << endl;
        int u, v, c;
        u = edge.u;
        v = edge.v;
        c = edge.c;
        if (dis[u] < INT_MAX, dis[u] + c < dis[v])
        {
            flag = true;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dis[i] << " ";
    }
    if (flag)
        cout << "cycle detected" << endl;
    return 0;
}