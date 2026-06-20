#include <iostream>
using namespace std;
int digitSum(int x) {
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int n, q, k;
    cin >> n >> q >> k;
    int p[n + 1];
    p[0] = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (digitSum(x) == k) {
            p[i] = p[i - 1] + 1;
        }
        else {
            p[i] = p[i - 1];
        }
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << p[r] - p[l - 1] << endl;
    }
return 0;
}