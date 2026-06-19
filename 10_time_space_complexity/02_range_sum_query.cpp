#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q; // number of queries
    cin >> q;
    for (int i = 0; i < q; i++) {  // run loop for q number of queries
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int j = l; j <= r; j++) {
            sum += a[j];
        }
        cout << sum << endl;
    }
return 0;
}