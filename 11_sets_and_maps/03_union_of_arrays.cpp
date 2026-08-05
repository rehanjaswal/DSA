#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    set<int> unionArray;
    for (int i = 0; i < n; i++) { 
        unionArray.insert(a[i]);
    }
    for (int i = 0; i < m; i++) { 
        unionArray.insert(b[i]);
    }
    for (auto x : unionArray) {
        cout << x << " ";
    }
return 0;
}