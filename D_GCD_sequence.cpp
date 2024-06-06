#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number_removed = 0;
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum +=a[i];
    }

    int b[n - 1];

    int k = 0;
    int j = 1;

    while (k<n-1)
    {
        int gcd;
        for (int i = 1; i <= a[k] && i <= a[j]; i++)
        {

            if (a[k] % i == 0 && a[j] % i == 0)
            {
                gcd=i;
            }
        }
        b[k] = gcd;
        k++;
        j++;
    }


    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    cout <<endl;
    for (int i = 0; i < n-1; i++)
    {
        cout << b[i]<<" ";
    }
    cout <<endl;
    cout<<sum;
    return 0;
}
