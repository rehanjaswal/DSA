#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int p[n], sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        p[i] = sum;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        if (l == 0) {
            cout << p[r] << endl;
        }
        else {
            cout << p[r] - p[l - 1] << endl;
        }
    }
return 0;
}