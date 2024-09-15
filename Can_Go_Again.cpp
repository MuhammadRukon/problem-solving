#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
long long dis[N];
class Edge
{
public:
    long long u, v, w;
    Edge(long long u, long long v, long long w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    long long n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    bool flag = false;
    while (e--)
    {
        long long a, b, w;
        cin >> a >> b >> w;
        edgeList.push_back(Edge(a, b, w));
    }

    long long s;
    cin >> s;

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LONG_MAX;
    }

    dis[s] = 0;
    for (long long i = 1; i < n; i++)
    {
        for (Edge edge : edgeList)
        {
            long long u = edge.u;
            long long v = edge.v;
            long long w = edge.w;

            if (dis[u] != LONG_MAX && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }

    for (Edge edge : edgeList)
    {
        long long u = edge.u;
        long long v = edge.v;
        long long w = edge.w;

        if (dis[u] != LONG_MAX && dis[u] + w < dis[v])
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        int t;
        cin >> t;

        while (t--)
        {
            long long d;
            cin >> d;

            if (dis[d] == LONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }

    return 0;
}