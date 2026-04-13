#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 1; i--) {
        bool swapped = false;
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[j + 1]) {
                bool swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == false) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}