#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';   // sum += s[i] - 48; as ASCII of '0' (char 0) is 48
    }

    cout << sum << endl;

    return 0;
}