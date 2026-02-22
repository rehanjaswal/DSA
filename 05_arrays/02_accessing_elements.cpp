#include <iostream>
using namespace std;
int main() {
    int marks[100];
    cout << "marks[100] : " << marks[100] << endl;   // i'll get an error or a an undefined behaviour like printing a garbage value, as this index isnt valid
    cout << "marks[1] : " << marks[1] << endl;
    return 0;
}