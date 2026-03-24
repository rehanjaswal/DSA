#include <iostream>
using namespace std;
int main() {

    char ch;
    cin >> ch;

    if (ch >= 'a' and ch <= 'z') cout << "lowercase";
    else if (ch >= 'A' and ch <= 'Z') cout << "uppercase";
    else if (ch >= '0' and ch <= '9') cout << "digit";
    else cout << "special";
    return 0;
}