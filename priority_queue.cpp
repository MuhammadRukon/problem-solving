#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        if (command == 1)
        {
            pq.pop();
        }
        if(command == 2){
            cout<<pq.top()<<endl;
        }
        if (command == 3)
        {
            break;
        }   
    }

    return 0;
}