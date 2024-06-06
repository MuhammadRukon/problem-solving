#include <bits/stdc++.h>
using namespace std;


int sum_of_digit(int num){
    int sum = 0;
    while (num){
        sum = sum+ num%10;
        num = num/10;
        
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int n;
        cin >> n;

        int total_sum = 0;
        int max = 1;
        int k = 1;
        while (k != n+1)
        {
            int sum = sum_of_digit(k);
            total_sum += sum;
            k++;
        }
        cout<<total_sum<<endl;
    }

    return 0;
}
