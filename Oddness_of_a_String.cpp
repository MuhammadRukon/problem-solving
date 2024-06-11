#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        int q;
        cin >> n >> q;
        cin >> s;

        int arr[26] = {0};
        int odd = 0;

        for (int k = 0; k < q; k++)
        {
            for (int i = 0; i < 26; i++)
            {
                arr[i] = 0;
            }
            odd = 0;
            int l, r;
            cin >> l >> r;

            for (int i = l - 1; i < r; i++)
            {
                int c = s[i] - 97;
                arr[c]++;
            }
            for (int i = 0; i < 26; i++)
            {
                if (arr[i] % 2 != 0)
                {
                    odd++;
                }
            }
            cout << odd << endl;
        }
    }
    return 0;
}
