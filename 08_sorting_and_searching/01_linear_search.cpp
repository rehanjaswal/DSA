#include <iostream>
using namespace std;
int main() {

    int n, target;
    cin >> n >> target;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            flag = true;
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