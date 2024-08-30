#include <bits/stdc++.h>
using namespace std;

void reduceGrid(int n, int k, const vector<string> grid)
{
    int reducedSize = n / k;
    vector<string> reducedGrid(reducedSize, string(reducedSize, ' '));

    for (int i = 0; i < reducedSize; i++)
    {
        for (int j = 0; j < reducedSize; j++)
        {
            reducedGrid[i][j] = grid[i * k][j * k];
        }
    }

    for (const string row : reducedGrid)
    {
        cout << row << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> grid(n);
        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }
        reduceGrid(n, k, grid);
    }
    return 0;
}