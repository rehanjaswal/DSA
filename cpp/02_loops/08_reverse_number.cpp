#include<iostream>
using namespace std; 
int main() {
    long long n;                   // integer value may be big, depends on user input, so better to use long long
    cout << "enter a number : ";
    cin >> n;
    if (n == 0) cout << n;     // edge case 0
    while (n != 0) {
        cout << n % 10;
        n = n / 10;
    }
}