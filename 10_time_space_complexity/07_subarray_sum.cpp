// method 1 TC -> O(n^3) and SC -> O(1)
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int l, r, sum = 0;
//     for (l = 0; l < n; l++) {
//         for (r = l; r < n; r++) {
//             for (int i = l; i <= r; i++) {
//                 sum += a[i];
//             }
//         }
//     }
//     cout << sum << endl;
// return 0;
// }


// method 2 (just use prefix sum mate) TC -> O(n^2) and SC -> O(n)
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int p[n], prefixSum = 0;
//     for (int i = 0; i < n; i++) {
//         prefixSum += a[i];
//         p[i] = prefixSum;
//     }
//     int l, r;
//     long long answer = 0;
//     for (l = 0; l < n; l++) {
//         for (r = l; r < n; r++) {
//             int subarraySum;
//             if (l == 0) subarraySum = p[r];
//             else subarraySum = p[r] - p[l - 1];
//             answer += subarraySum;
//         }
//     }
//     cout << answer << endl;
// return 0;
// }

// goated method, most efficient, TC-> O(n) and SC -> O(1)
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
        sum += (i + 1) * (n - i) * a[i];   // number of times a[i] appears in all subarrays times a[i]
    }
    cout << sum << endl;
return 0;
}