#include <bits/stdc++.h>
using namespace std;
bool checkSubarraySum(const vector<int>& arr) {
    int preSum = 0, n = arr.size();
    set<int> st;
    for (int i = 0; i < n; i++)  {
        preSum += arr[i];
        if (preSum == 0) return true;
        if (st.contains(preSum)) return true;
        st.insert(preSum);
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    bool ans = checkSubarraySum(arr);
    if (ans) cout << "true" << endl;
    else cout << "false" << endl;
return 0;
}