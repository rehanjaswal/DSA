    // one based solution
    #include <iostream>
    using namespace std;
    int main() {
        int n;
        cin >> n;
        int a[n + 1], p[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i += 2) {
            a[i] = 0;
        }
        p[0] = 0;
        for (int i = 1; i <= n; i++) {
            p[i] = p[i - 1] + a[i];
        }
        int q, sum;
        cin >> q;
        while (q--) {
            int l, r;
            cin >> l >> r;
            sum = p[r] - p[l - 1];
            cout << sum << endl;
        }
    return 0;
    }