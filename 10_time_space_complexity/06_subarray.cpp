#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l, r;
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            for (int i = l; i <= r; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
return 0;
}