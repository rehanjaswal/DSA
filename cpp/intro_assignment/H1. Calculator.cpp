// N+M
// N−M
// N×M
// N÷M
//  (integer division)
// NmodM


#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n;
    cin >> m;
    cout << n << " + " << m << " = " << n + m << endl; 
    cout << n << " - " << m << " = " << n - m << endl; 
    cout << n << " * " << m << " = " << n * m << endl; 
    cout << n << " / " << m << " = " << n / m << endl; 
    cout << n << " % " << m << " = " << n % m << endl;
    return 0;
}