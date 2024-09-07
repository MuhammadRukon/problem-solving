#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        map<string, int> mp;

        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);
        string word;

        int countMax = 0;
        string wordMax;
        
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > countMax)
            {
                countMax = mp[word];
                wordMax = word;
            }
        }

        cout << wordMax << " " << countMax << endl;
    }
    return 0;
}