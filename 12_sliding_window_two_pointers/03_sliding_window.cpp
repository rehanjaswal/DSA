//  TC -> O(n) and SC -> O(1)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    // build the answer for the first window
    int sum = 0;
    for (int i = 0; i < k; i++) sum += arr[i];
    int ans = sum;
    // calculate the answer for the remaining windows
    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];
        ans = max(ans, sum);
    }
    cout << ans << endl;
return 0;
}
