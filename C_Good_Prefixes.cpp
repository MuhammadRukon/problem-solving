// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;
//     for (int l = 0; l < t; l++)
//     {
//         long long int n;
//         cin >> n;
//         long long int arr[n];
//         long long int x = 0;
//         for (long long int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         long long int j = 0;

//         while (j < n)
//         {
//             vector<long long int> v;
//             for (long long int i = 0; i <= j; i++)
//             {
//                 v.push_back(arr[i]);
//             }
//             if (v.size() == 1 && v[0] == 0)
//             {
//                 x++;
//             }
//             else
//             {
//                 long long int maxIdx = 0;
//                 long long int sum = 0;
//                 for (long long int i = 1; i < v.size(); i++)
//                 {
//                     if (arr[maxIdx] < v[i])
//                     {
//                         maxIdx = i;
//                     }
//                 }
//                 for (long long int i = 0; i < v.size(); i++)
//                 {
//                     if (i != maxIdx)
//                     {
//                         sum += v[i];
//                     }
//                 }
//                 if (sum == v[maxIdx])
//                 {
//                     x++;
//                 }
//             }
//             j++;
//         }
//         cout << x << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int l = 0; l < t; l++) {
        long long int n;
        cin >> n;
        vector<long long int> arr(n);
        vector<long long int> prefixSum(n + 1, 0);
        
        for (long long int i = 0; i < n; i++) {
            cin >> arr[i];
            prefixSum[i + 1] = prefixSum[i] + arr[i];
        }

        long long int x = 0;
        long long int currentMax = arr[0];

        for (long long int j = 0; j < n; j++) {
            if (j > 0) {
                currentMax = max(currentMax, arr[j]);
            }

            long long int subArraySum = prefixSum[j + 1];
            if (subArraySum - currentMax == currentMax) {
                x++;
            }
        }

        cout << x << endl;
    }
    return 0;
}