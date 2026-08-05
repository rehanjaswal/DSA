#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    set<int> distinct;
    for (int i = 0; i < n; i++) {
       distinct.insert(arr[i]);
    }
    cout << distinct.size() << " distinct elements" << endl;
return 0;
}