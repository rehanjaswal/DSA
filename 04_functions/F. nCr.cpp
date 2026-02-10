#include <iostream>
using namespace std;
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i<= n; i++) {
        fact *= i;
    }
    return fact;
}
long long Combinatorics(int n, int r) {
    if (r > n or r < 0) return 0;
    long long nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return nCr;
}
int main() {
    int n, r;
    cin >> n >> r;
    cout << Combinatorics(n,r);
    return 0;
}