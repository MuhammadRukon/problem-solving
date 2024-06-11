#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        string s;
        int k;
        cin >> s >> k;
        int i = 0;
        int j = s.size() - 1;
        int cost = 0;
        while (i < j)
        {
            int left = s[i];
            int right = s[j];
            cost += abs(left - right);
            i++;
            j--;
        }
        if (cost <= k)
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
