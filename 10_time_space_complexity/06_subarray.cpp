#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {      // cuz r must be more than or equal to l
            for (int i = l; i <= r; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
return 0;
}   // time complexity -> O(n^3)   // space complexity -> O(1)