#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli n, k;
    cin >> n >> k;
    lli odd_el = 0;
    lli even_el = 0;

    if (n % 2 == 0)
    {
        odd_el = n / 2;
    }
    else
    {
        odd_el = (n / 2) + 1;
    }

    even_el = n / 2;

    if (k <= odd_el)
    {
        cout << (k * 2) - 1;
    }
    else
    {
        k = k - odd_el;
        cout << (k * 2);
    }
    return 0;
}