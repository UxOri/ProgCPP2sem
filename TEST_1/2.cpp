#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int main () {
    int N;
    cin >> N;

    double x = 0;
    double S = 0;
    for (int i = 0; i < N; i++) {
        cin >> x;
        S += x;
        x = 0;
    }

    cout << std::fixed << std::setprecision(10);
    cout << S/N;

    return 0;
}
