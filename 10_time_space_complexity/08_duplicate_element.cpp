#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {     // O(n^2)
            if (arr[i] == arr[j]) {
                flag = true;
                break;
            }
        }
    }

    if (flag) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

return 0;
}