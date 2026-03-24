#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count ++;
    }
    return count == 2;
}
int main() {
    int n;
    cin >> n;
    bool ans = isPrime(n);
    if (ans) cout << "Prime";
    else cout << "Not Prime";
    return 0;
}