#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        if(n>=4){
            count = (n/4);
            n-=count*4;
        }
        if(n){ 
            count++;
            n=0;
        }
        cout<< count <<endl;
    }

    return 0;
}