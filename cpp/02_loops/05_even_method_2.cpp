#include<iostream>
using namespace std;
int main() {
    int n, i = 2;
    cout << "enter a number : ";
    cin >> n;
    while (i<=n) {
        cout << i << endl;
        i += 2;
    }
}