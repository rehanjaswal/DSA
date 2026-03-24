// You are given a string s
//  consisting of lowercase English letters, and two characters c1
//  and c2
// Your task is to replace every occurrence of c1
//  in the string s
//  with c2
//  and print the resulting string.

#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    char ch1, ch2;
    cin >> ch1 >> ch2;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] == ch1) {
            s[i] = ch2;
        }
    }
    
        cout << s << endl;

    return 0;
}