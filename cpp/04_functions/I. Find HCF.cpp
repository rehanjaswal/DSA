#include <iostream>
using namespace std;
int hcf(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a == 0) return b;    
    if (b == 0) return a;    
    int minimum = (a < b) ? a : b;
    for (int i = minimum; i >= 1; i--) {
        if (a % i == 0 and b % i == 0) return i;
    }
    return 1;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << hcf(a,b);
    return 0;
}