#include <iostream>
using namespace std;
int main() {
    int n, target;
    cin >> n;
    cin >> target;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if(target == arr[i]) {
            flag = true;
            break;
        }
    }

    // if(flag) {
    //     cout << "yes\n";
    // }
    // else {
    //     cout << "no\n";
    // }

    cout << (flag ? "yes\n" : "no\n");
    
    return 0;
}