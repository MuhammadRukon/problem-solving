#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin >> y;
    for (int x = 0; x < y; x++)
    {
        int n, f, k;
        cin >> n >> f >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int favourite = a[f - 1];
        sort(a, a + n, greater<int>());
        int b[n];
        int has_in_removed_part = 0;
        int has_in_new_array = 0;
        int has_in_rest_of_old_array = 0;

        for (int i = 0; i < n; i++)
        {
            if (i < k)
            {
                b[i] = 0;
            }
            else
            {
                b[i] = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {

            if (i < k)
            {
                if (a[i] == favourite)
                {
                    has_in_removed_part = 1;
                }
            }
            else
            {
                if (a[i] == favourite)
                {
                    has_in_rest_of_old_array = 1;
                }
                if (b[i] == favourite)
                {
                    has_in_new_array = 1;
                }
            }
        }

        if (has_in_new_array && !has_in_removed_part && has_in_rest_of_old_array)
        {
            cout << "NO";
        }
        else
        {
            if (has_in_new_array && has_in_removed_part && has_in_rest_of_old_array)
            {
                cout << "MAYBE";
            }
            else
            {
                cout << "YES";
            }
        }
        cout << endl;
    }
    return 0;
}

