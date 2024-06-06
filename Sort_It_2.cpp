#include <bits/stdc++.h>

using namespace std;

int * sort_it(int size)
{

    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    int * arr = sort_it(n);
    sort(arr, arr+n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}
