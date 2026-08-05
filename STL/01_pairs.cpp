#include <iostream>
using namespace std;

void explainPair() {
    pair<int, int> p = {7, 10};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {7, {10, 11}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;
}

int main() {
    explainPair();
    return 0;
}