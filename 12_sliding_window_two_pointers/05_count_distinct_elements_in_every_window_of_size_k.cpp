#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    unordered_map<int, int> freq;

    // build first window
    for (int i = 0; i < k; i++) freq[arr[i]]++;
    cout << freq.size() << " ";
    // further windows
    for (int i = k; i < n; i++) {
        // remove outgoing element
        freq[arr[i - k]]--;
        // if the frequency of the removed element becomes zero, delete its key
        if (freq[arr[i - k]] == 0) freq.erase(arr[i - k]);
        // add incoming element
        freq[arr[i]]++;
        
        cout << freq.size() << " ";
    }
return 0;
}
