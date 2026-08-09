#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int target;
    cin >> target;
    unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x = target - arr[i];
        if (mp.find(x) != mp.end()) {
            count += mp[x];
        }
        if (mp.find(arr[i]) != mp.end()) mp[arr[i]]++;
        else mp[arr[i]] = 1;
    }
    cout << count << endl;
return 0;
}