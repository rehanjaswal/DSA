#include <iostream>
using namespace std;
int main() {
    // lets say i wanna store marks of students
    // int m1, m2, m3, m4, m5;
    // cin >> m1 >> m2 >> m3 >> m4 >> m5;
    // a better way to do this is to define an array
    int marks[5]; // this creates an array of 5 boxes (inside which you can insert your values)
    // also, the indexing of an array starts from 0 and NOT 1
    // marks[0] = 99;    
    // cout << marks[0];
    
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
    
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}

// last element is located at index (n - 1); where n is the number of elements in the array
// once an array is created, all elements are assigned a random value (grabage value)