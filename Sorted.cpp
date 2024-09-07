#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        set<int> numUnique(numbers.begin(), numbers.end());
        for(auto it = numUnique.begin(); it != numUnique.end(); it++){
            cout<< *it <<" ";
        }
        cout << endl;
    }
    return 0;
}