// binary search is applicable only on sorted arrays
#include <iostream>
using namespace std;
int main() {
    int n, target;
    cin >> n >> target;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;
    bool flag = false;

    while (left <= right) {
        int mid = (left + right) / 2;
 
        if (arr[mid] == target) {
            flag = true;
            break;
        }
        else if (arr[mid] > target) {
            // search on the left
            right = mid - 1;
        }
        else {
            // search on the right
            left = mid + 1;
        }
    }

    cout << (flag ? "YES" : "NO");

    return 0;
}