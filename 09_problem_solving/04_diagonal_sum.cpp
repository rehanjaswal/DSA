// #include <iostream>
// using namespace std;
// int main() {
//     int n;     // input for order of the square matrix
//     cin >> n;
//     int arr[n][n];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i][i];                 // for diagonal elements, i = j
//     }
//     cout << sum << endl;

// return 0;
// }



// for anti diagonal

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
    int sum = 0, i = 0, j = n - 1;
    while (i < n and j >= 0) {
        sum += arr[i][j];
        i++;
        j--;
    }
    cout << sum << endl;
return 0;
}