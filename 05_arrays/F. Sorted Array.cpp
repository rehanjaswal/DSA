#include <iostream>  // sorted array means every element should be greater than or equal to its left adjacent (previous) element
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool flag = true;

    // for (int i = 1; i < n; i++) {
    //     if (arr[i] >= arr[i - 1]) {  // this is for non decreasing, if i wannna check stricty increasing write > instead of >=
    //         //no issues
    //     }
    //     else {
    //         flag = false;
    //         break;
    //     }
    // }

    // better way to write this ->

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            flag = false;
            break;
        }
    }

    // if (flag) {
    //     cout << "YES";
    // }
    // else {
    //     cout << "NO";
    // }


    // use ternary operator instead of this pile of crap
    cout << flag ? "YES" : "NO";
    // condition ? value_if_true : value_if_false

    cout << (flag ? "YES" : "NO");

    return 0;
}