#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>ls;
    while(true){
        int n;
        cin>>n;
        if(n == -1){
            break;
        }
        ls.push_back(n);
    }
    ls.sort();
    ls.unique();
    for(int c : ls){
        cout<<c<<" ";
    }
    return 0;
}