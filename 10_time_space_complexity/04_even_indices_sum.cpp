// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for (int i = 1; i < n; i+=2) {  // change all odd indices values to zero
//         a[i] = 0;
//     } 
//     int p[n], sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += a[i];
//         p[i] = sum;
//     }
//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++) {
//         int l, r;
//         cin >> l >> r;
//         if (l == 0) {
//             cout << p[r] << endl;
//         }       
//         else {
//             cout << p[r] - p[l - 1] << endl;
//         }
//     }
// return 0;
// }

// even based indexing solution

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i+=2) {
        a[i] = 0;                      // change all odd indices values to zero
    }
    int p[n + 1];
    p[0] = 0; // define base case for prefix sum array
    for (int i = 1; i <= n; i++) {      
        p[i] = p[i - 1] + a[i];       // better way to build a prefix sum array
    }

    // for (int i = 1; i <= n; i++) {
    //     sum += a[i];
    //     p[i] = sum;
    // }           

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << p[r] - p[l - 1] << endl;
    }
return 0;
}