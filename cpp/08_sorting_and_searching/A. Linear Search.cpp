#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool flag = false;
    int target;
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {

            flag = true;
        }
    }

    // if (flag) {
    //     cout << "YES";   
    // }
    // else {
    //     cout << "NO";
    // }

    cout << (flag ? "YES" : "NO");

    return 0;
}