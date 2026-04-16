// given  a 2D array, find sum of its diagonal elements

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // int i = 0, sum = 0;

    // while (i < n) {
    //     sum += arr[i][i];
    //     i++;
    // }

    // cout << sum << endl;

// if i wanna find sum of secondary/anti/cross diagonal:

    int i = 0, j = n - 1, sum = 0;

    while (i < n and j >= 0) {
        sum += arr[i][j];
        i++;
        j--;
    }

    cout << sum << endl;

    return 0;
}

