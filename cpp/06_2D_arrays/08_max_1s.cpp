//   1 0 0 1     in this example, answer is 2 as row number 2 contains the highest number of 1s 
//   1 1 0 1
//   1 1 1 1
//   0 0 0 1

#include <iostream>
using namespace std;     
int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int maxOneRow = 0, maxOneCount = 0;
    for (int i = 0; i < n; i ++) {
        int oneCount = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1) {
                oneCount++;
            }
        }
        if (oneCount > maxOneCount) {
            maxOneCount = oneCount;
            maxOneRow = i;
        }
    }

    cout << maxOneRow << " " << maxOneCount;
    
    return 0;
}