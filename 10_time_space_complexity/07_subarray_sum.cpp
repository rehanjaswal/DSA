/// brute force method
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int sum = 0;
//     for (int l = 0; l < n; l++) {
//         for (int r = l; r < n; r++) {
//             for (int i = l; i <= r; i++) {
//                 sum += a[i];
//             }
//         }
//     }
//     cout << sum << endl;
// return 0;
// }

/// method 2 just use prefix sum mate

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int p[n];
//     p[0] = a[0];
//     for (int i = 1; i < n; i++) {
//         p[i] = p[i - 1] + a[i];
//     }
//     long long sum = 0;
//     for (int l = 0; l < n; l++) {
//         for (int r = l; r < n; r++) {
//             int subarraySum;
//             if (l == 0) subarraySum = p[r];
//             else subarraySum = p[r] - p[l - 1];
//             sum += subarraySum;
//         }
//     }
//     cout << sum << endl;
    
// return 0;
// }    // TC -> O(n^2) SC -> O(n)


/// method 3, most efficient method TC is n and SC is 1
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (i + 1) * (n - i) * a[i];
    }
    cout << sum << endl;
return 0;
}