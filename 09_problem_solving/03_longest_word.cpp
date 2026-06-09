#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size(), i = 0, maxCount = 0;
    while (i < n) {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        int j = i, count = 0;
        while (j < n and s[j] != ' ') {
            count++;
            j++;
        }
        if (count > maxCount) {
            maxCount = count;
        }
        i = j;
    }
    cout << maxCount << endl;
return 0;
}