#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if (ch >= 97 and ch <= 122) {
        cout << ch << " is lowercase";
    }
    else {
        cout << ch << " is not lowercase";
    }

    return 0;
}