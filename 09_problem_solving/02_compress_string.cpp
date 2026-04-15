// aabbcccc
// compress it to a3b2c4

#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;

    int i = 0, n = s.size();
    while (i < n) {
        int j = i, counter = 0;
        while (j < n and s[i] == s[j]) {
            counter++;
            j++;
        }
        cout << s[i];
        if (counter > 1) {
            cout << counter;
        }
        i = j;
    } 
    cout << endl;
    
    return 0;
}