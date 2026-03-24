#include <iostream>
using namespace std;
int countZeros(int n) {
    if (n == 0) return 1;
    n = abs(n);
    int count = 0;
    while (n > 0) {
        if (n % 10 == 0) count++;
        n = n / 10;
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    int ans  = countZeros(n);
    cout << ans;
    return 0;
}