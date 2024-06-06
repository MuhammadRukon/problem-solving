#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{

    int n;
    cin>>n;
    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }
    int j = 0;
    int k = n-1;

    while (j < k)
    {
        char temp = students[j].s;
        students[j].s = students[k].s;
        students[k].s = temp;
        j++;
        k--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << students[i].nm << ' ' << students[i].cls << ' ' << students[i].s << ' ' << students[i].id << endl;
    }
    return 0;
}
