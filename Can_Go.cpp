#include <bits/stdc++.h>
using namespace std;
const long long N = 10000;
vector<pair<int, int>> v[N];
long long dis[N];
class cmp
{
public:
    bool operator()(pair<int, long long> a, pair<int, long long> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int s)
{
    priority_queue<pair<int, long long>, vector<pair<int, long long>>, cmp> pq;
    pq.push({s, 0});
    dis[s] = 0;
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        long long cost = parent.second;

        for (pair<int, long long> child : v[node])
        {
            int childNode = child.first;
            long long childCost = child.second;

            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    int s;
    cin >> s;
    int t;
    cin >> t;
    dijkstra(s);
    while (t--)
    {
        int d;
        long long c;
        cin >> d >> c;
        if (dis[d] <= c)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}