#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == m) {
//             cout << "FOUND";
//             break;
//         }
//     }
//     return 0;
// }

// bool flag = false;
int cnt = 0;

for (int i = 0; i < n; i++) {
    if (arr[i] == m) {
        // flag = true;
        cnt += 1;
    } 
}

// if (flag) {
//     cout << "FOUND" << " " << cnt;
// }
// else {
//     cout << "NOT FOUND" << " " << cnt;;
// }

// if im having a counter then i dont really need a bool flag cuz if cnt > 0 the number is surely present in the array, so ->

if (cnt > 0) {
    cout << "FOUND" << endl << "frequency : " << cnt;
}
else cout << "NOT FOUND" << endl << "frequency : " << cnt;

}