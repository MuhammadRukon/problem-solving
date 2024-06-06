#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)

    {
    string arr[3];
    int idx;
    int a = 1;
    int b = 1;
    int c = 1;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        int k = arr[i].find('?');
        if (k <= 2 && k >= 0)
        {
            idx = i;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (arr[idx][i] == 'A')
        {
            a = 0;
        }
        if (arr[idx][i] == 'B')
        {
            b = 0;
        }
        if (arr[idx][i] == 'C')
        {
            c = 0;
        }
    }
    if(a){
        cout<<"A\n";
    }else if(b){
        cout<<"B\n";
    }else{
        cout<<"C\n";
    }
   
    }

    return 0;
}
