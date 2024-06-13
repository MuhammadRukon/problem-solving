#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int flag = 0;
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int j = 0;
    while (j < n - 1)
    {
        if (arr[j] == arr[j + 1])
        {
            flag = 1;
            break;
        }
        j++;
    }
    flag ? cout << "YES" : cout << "NO";
    return 0;
}