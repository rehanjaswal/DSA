#include<iostream>
using namespace std; 
int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    if (n == 0) cout << n;     // edge case 0
    while (n != 0) {
        cout << n % 10;
        n = n / 10;
    }
}