// TC -> O(n) and SC -> O(1)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int sum = 0, ans = INT_MIN;
    // build the first sliding window
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    // calculate the sums of the remaining sliding windows, and compare var sum with var ans
    for (int i = k; i < n; i++) {
        sum += arr[i];
        sum -= arr[i - k];
        ans = max(ans, sum);
    }
    cout << ans << endl;
return 0;
}
