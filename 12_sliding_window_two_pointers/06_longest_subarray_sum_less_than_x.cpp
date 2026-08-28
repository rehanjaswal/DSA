#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int sum = 0, l = 0, maxLength = 0;
    for (int r = 0; r < n; r++) {
        sum += nums[r];
        while (sum >= x) {
            sum -= nums[l];
            l++;
        }
        maxLength = max(maxLength, r - l + 1);
    }
    cout << maxLength << endl;
return 0;
}

