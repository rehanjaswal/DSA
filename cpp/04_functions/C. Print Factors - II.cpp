#include <iostream>
using namespace std;
bool isFactor(int n, int i) {
    return n % i == 0;
}
int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        if (isFactor(n,i)) cout << i << " ";
    }
    return 0;
}