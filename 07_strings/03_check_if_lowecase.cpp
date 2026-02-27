#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if (ch >= 'a' and ch <= 'z') {
        cout << ch << " is lowercase";
    }
    else {
        cout << ch << " is not lowercase";
    }

    return 0;
}