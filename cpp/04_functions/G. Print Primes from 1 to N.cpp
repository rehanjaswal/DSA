#include <iostream>
using namespace std;
bool isPrime(int n) {
    int count = 0;
    if (n <= 1) return false;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    return count == 2;
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if(isPrime(i)) cout << i << " ";
    }
    return 0;
}