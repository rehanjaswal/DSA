#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int n = s.size();
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    
    cout << count + 1;   // number of words will be one more than the number of spaces
    return 0;
}