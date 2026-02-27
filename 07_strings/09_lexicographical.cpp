#include <iostream>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;

    if (s < t) cout << s;
    else if (s == t) cout << "you typed two same words dumbass";
    else cout << t;
    return 0;
}