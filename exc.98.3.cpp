#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double d = 10, sum = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        sum += d;
        d = d + d * 10/100;
    }
    cout << sum;
    return 0;
}