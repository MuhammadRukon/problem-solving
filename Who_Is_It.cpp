#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char sec;
    int mark;
};
int main()
{
    int x;
    cin >> x;
    for (int j = 0; j < x; j++)
    {
        Student a, b, c;
        for (int i = 0; i < 3; i++)
        {
            int id;
            char name[101];
            char sec;
            int mark;

            cin >> id >> name >> sec >> mark;

            if (i == 0)
            {
                a.id = id;
                strcpy(a.name, name);
                a.sec = sec;
                a.mark = mark;
            }
            if (i == 1)
            {
                b.id = id;
                strcpy(b.name, name);
                b.sec = sec;
                b.mark = mark;
            }
            if (i == 2)
            {
                c.id = id;
                strcpy(c.name, name);
                c.sec = sec;
                c.mark = mark;
            }
        }
        Student topper = a;

        if (b.mark > topper.mark)
        {
            topper = b;
        }
        if (c.mark > topper.mark)
        {
            topper = c;
        }

        cout << topper.id << " " << topper.name << " " << topper.sec << " " << topper.mark << endl;
    }

    return 0;
}