#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a;
    cin >> b;
    int area = a * b;
    int perimeter = 2 * (a + b);
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}