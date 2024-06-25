#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);

        int smallest_value = INT_MAX;
        int median = arr[1];

        smallest_value = abs(arr[0] - median) + abs(arr[1] - median) + abs(arr[2] - median);
        cout << smallest_value << endl;
    }
    return 0;
}