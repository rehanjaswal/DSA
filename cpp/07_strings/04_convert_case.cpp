#include <iostream>
using namespace std;
int main() {
    // uppercase to lowercase
    char ch1;
    cin >> ch1;
    if (ch1 >= 'A' and ch1 <= 'Z') {
        ch1 += 32;
    }
    cout << ch1;

    // lowercase to uppercase
    char ch2;
    cin >> ch2;
    if(ch2 >= 'a' and ch2 <= 'z') {
        ch2 -= 32;
    }
    cout << ch2;
    
    return 0;
}
