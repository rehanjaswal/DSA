#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int c0 = 0, c1 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            c0++;
        }
    }

    for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
        c1++;
        }
    }

    for (int i = 1; i <= c0; i++) {
        cout << "0 ";
    }
    
    for (int i = 1; i <= c1; i++) {
        cout << "1 ";
    }
    return 0;
}