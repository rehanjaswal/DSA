// TC -> O(n^2) and SC -> O(1)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, ans = INT_MIN;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int l = 0; l < n; l++) {
        int sum = 0;
        for (int r = l; r < n; r++) {
            sum += arr[r];
            if (r - l + 1 == k) {
                ans = max(ans, sum);
            }
        }
    }
    cout << ans << endl;
return 0;
}
