#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (left == j)
            {
                if (left == right)
                {
                    cout << "X";
                }
                else
                {

                    cout << "\\";
                }
            }
            else if (right == j)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        left++;
        right--;
        cout << endl;
    }

    return 0;
}