#include <iostream>
using namespace std;
// void swap(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "a = " << a << endl << "b = " << b;
//     return;
// }

int main() {
    int a, b;
    cin >> a >> b;
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << "a = " << a << endl << "b = " << b;

    swap(a, b);

    cout << a << " " << b;

    // even better way: c++ got an inbuilt function for this swapping shit called swap, theres no need to create a dedicated fn like i did in Clang 
    return 0;
}