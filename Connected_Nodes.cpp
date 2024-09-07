#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if(adj[x].size()==0){
            cout<<"-1"<<endl;
            continue;
        }
        sort(adj[x].begin(), adj[x].end(), greater<int>());
        for( int child : adj[x]){
            cout<<child<<" ";
        }
       cout<<endl;
    }
    return 0;
}