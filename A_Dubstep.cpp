#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    while (
        line.find("WUB") >= 0 && line.find("WUB") < line.size())
    {
        int idx = line.find("WUB");
        string c;
        if (idx == 0 || line[idx - 1] == ' ' || line[idx + 1] == ' ')
        {
            c = "";
        }
        else
        {
            c = " ";
        }
        line.replace(line.begin() + idx, line.begin() + idx + 3, c);
    }
        cout << line;
        return 0;
    }