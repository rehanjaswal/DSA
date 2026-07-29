#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }
    int p[n], sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        p[i] = sum;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r, sum;
        cin >> l >> r;
        l--;              // do l-- and r-- for one based indexing
        r--;
        if (l == 0) {
            sum = p[r];
        }
        else {
            sum = p[r] - p[l - 1];
        }
        cout << sum << endl;
    }
return 0;
}