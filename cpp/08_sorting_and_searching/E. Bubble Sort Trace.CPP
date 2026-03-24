#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        bool wasSwapped = false;
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[j + 1]) {
                wasSwapped = true;
                swap (arr[j], arr[j + 1]);
            }
        }
        if (wasSwapped == false) {     
            break;                          // we can break early if array was already sorted
        }    
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}