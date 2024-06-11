#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i : v)
    {
        int val = i+1;
        auto it = find(v.begin(), v.end(), val);
        if(it != v.end()){
            result++;
        }
    }
    cout<<result;
    return 0;
}