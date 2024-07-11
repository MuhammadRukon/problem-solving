#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int available = 5;
        vector<int> nums = {a, b, c};
        
        while (available > 0) {
            sort(nums.begin(), nums.end());
            nums[0]++;
            available--;
        }
        
        int result = nums[0] * nums[1] * nums[2];
        cout << result << endl;
    }
    return 0;
}