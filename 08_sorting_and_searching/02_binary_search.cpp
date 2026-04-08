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

    int leftIndex = 0, rightIndex = n - 1;
    bool flag = false;

    while (leftIndex <= rightIndex) {
        int middleIndex = (leftIndex + rightIndex) / 2;

        if (arr[middleIndex] == target) {
            flag = true;
            break;
        }
        else if (arr[middleIndex] > target) {
            // search on the left
            rightIndex = middleIndex - 1; 
        }
        else {
            // search on the right
            leftIndex = middleIndex + 1;
        }
    }
    
    cout << (flag ? "yes\n" : "no\n");

    return 0;
}