#include <bits/stdc++.h>
using namespace std;
#define showTop cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl
#define khali cout << "Empty" << endl

class Person
{
public:
    string name;
    int roll;
    int marks;
    Person(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Person a, Person b)
    {
        if(a.marks == b.marks){
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};

int main()
{

    int n;
    cin >> n;
    priority_queue<Person, vector<Person>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        Person p(name, roll, marks);
        pq.push(p);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            string name;
            int roll;
            int marks;
            cin >> name >> roll >> marks;
            Person p(name, roll, marks);
            pq.push(p);
            showTop;
        }
        else if (cmd == 1)
        {
            (!pq.empty()) ? showTop : khali;
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                (!pq.empty()) ? showTop : khali;
            }
            else
            {
                khali;
            }
        }
    }
    return 0;
}