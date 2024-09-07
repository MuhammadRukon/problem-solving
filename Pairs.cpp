#include <bits/stdc++.h>
using namespace std;

bool cpm(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<string, int>> pairs(n);

    while (n--)
    {
        string name;
        int id;
        cin >> name >> id;
        pairs[n].first = name;
        pairs[n].second = id;
    }
    sort(pairs.begin(), pairs.end(), cpm);

    for (auto it : pairs)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
