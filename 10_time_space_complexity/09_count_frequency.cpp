// TC -> O(n^2)
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == INT_MAX) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = INT_MAX;
            }
        }
        cout << arr[i] << " occurs " << count;
        if (count == 1) {
            cout << " time" << endl;
        }
        else {
            cout << " times" << endl;
        }
    }
return 0;
}