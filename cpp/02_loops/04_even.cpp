#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cout << "enter a number : ";
    cin >> n;
    while (i<=n) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
}