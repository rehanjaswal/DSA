#include <iostream>
using namespace std;
int main() {

    string s1;
    cin >> s1;
    cout << s1; // only prints one word, can't be used to print a sentence

    // to print an entire sentence, use getline
    string s2;
    getline(cin, s2);
    cout << s2;
    return 0;
}