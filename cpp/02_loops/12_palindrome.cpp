#include<iostream>
using namespace std;
int main() {
    int n, r = 0;
    cout << "enter a number: ";
    cin >> n;
    int temp = n;
    while(n != 0) {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    if (temp == r) cout << "YES";
    else cout << "NO";
    return 0;
}