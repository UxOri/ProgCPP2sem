#include <iostream>
#include <cmath>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main () {
    int N;
    cin >> N;
    if (N < 0) {
        cout << "inf";
        return 0;
    }

    int S = 1;

    for (int i = 2; i <= N; i++)
        S *= i;
    cout << S;

    return 0;
}
