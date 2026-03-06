#include <iostream>
using namespace std;
int main() {

    int n, target;
    cin >> n >> target;
    int l = 0, r = n - 1, arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool flag = false;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (arr[mid] == target) {
            flag = true;
            break;
        }
        else if (arr[mid] > target) {
            // search on the left
            r = mid - 1;
        }
        else if (arr[mid] < target) {
            // search on the fucking right mate
            l = mid + 1;
        }    
    }

    cout << (flag ? "YES" : "NO");
}
