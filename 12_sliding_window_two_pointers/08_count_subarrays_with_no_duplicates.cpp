// TC -> O(n) and SC -> O(n)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    unordered_map<int, int> freq;
    
    int l = 0, count = 0;
    for (int r = 0; r < n; r++) {
        freq[nums[r]]++;
        while (freq[nums[r]] > 1) {
            freq[nums[l]]--;
            l++;
        }
        count += r - l + 1;
    }
    cout << count << endl;
return 0;
}
