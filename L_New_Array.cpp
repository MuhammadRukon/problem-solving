#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> vec1(n);
    vector<int> vec2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vec2[i];
    }
    vec1.insert(vec1.begin(), vec2.begin(), vec2.end());
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    return 0;
}