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

    int* data = new int[N];
    for (int i = 0; i < N; i++)
        cin >> data[i];
    std::sort (data, data + N);
    /*for (int i = 0; i < N; i++)
        cout << data[i];  */
    double S = fabs(data[0] - data[1]);
    int a = 0;
    int b = 1;
    for (int i = 0; i < N - 1; i++) {
        if (fabs(data[i] - data[i+1]) < S) {
            a = i;
            b = i + 1;
            S = fabs(data[i] - data[i+1]);
        }
    }

    cout << a + 1 << ", " << b + 1;

    return 0;
}
