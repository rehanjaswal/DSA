#include <iostream>
using namespace std;
int main() {
// // first method
//     int n, sum = 0;
//     cin >> n;

//     while (n != 0) {
//         sum += n % 10;
//         n /= 10;
//     }

//     cout << "sum = " << sum << endl;

    // second method (for pretty long numbers)
    string s;
    cout << "enter a number you dumb fucking wanker: ";
    cin >> s;
    int n = s.size(), sum = 0;

    for (int i = 0; i < n; i++) {
        sum += s[i] - 48;   // cuz s[0] = '1' (ascii = 48), lly s[1] = '2' (ascii = 49).. just subtract 48 brutal
    }
    cout << "sum of digits = " << sum << endl;

return 0;
}