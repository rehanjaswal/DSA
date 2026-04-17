#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);

    int i = 0, n = s.size(), maxCount = 0;

    while (i < n) {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        int j = i, wordCount = 0;
        while (j < n and s[j] != ' ') {
            wordCount++;
            j++;
        }
        if (wordCount > maxCount) {
            maxCount = wordCount;
        }
        i = j;
    }

    cout << maxCount << endl;

    return 0;
}