#include <bits/stdc++.h>

using namespace std;

int main()
{

    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    string s1;
    string substring;
    cin >> s1 >> substring;

    while (s1.find(substring) < s1.size())
    {
        s1.replace(s1.find(substring), substring.size(), "#");
    }
    cout << s1 << endl;

    string s2;
    string substring2;
    cin >> s2 >> substring2;

    while (s2.find(substring2) < s2.size())
    {
        s2.replace(s2.find(substring2), substring2.size(), "#");
    }
    cout << s2 << endl;
    // }
    return 0;
}
