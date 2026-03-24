#include<iostream>
using namespace std;
int main() {
    int l, r;
    cout << "enter initial value: ";
    cin >> l;
    cout << "enter final value: ";
    cin >> r;
    while (l<=r) {
        cout << l << endl;
        l++;
    }
}