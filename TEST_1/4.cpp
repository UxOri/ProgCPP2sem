#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

struct int2 {
    int num = 0;
    int i = 0;
};

bool comparator (int2 a, int2 b) {
    return a.num < b.num;
}

int main () {
    int N;
    cin >> N;

    int2* data = new int2[N];
    for (int i = 0; i < N; i++) {
        cin >> data[i].num;
        data[i].i = i;
    }
    std::sort (data, data + N, comparator);
    /*for (int i = 0; i < N; i++)
        cout << data[i];  */
    double S = fabs(data[0].num - data[1].num);
    int a = data[0].i;
    int b = data[1].i;
    for (int i = 0; i < N - 1; i++) {
        if (fabs(data[i].num - data[i+1].num) < S) {
            a = data[i].i;
            b = data[i + 1].i;
            S = fabs(data[i].num - data[i+1].num);
        }
    }

    cout << a + 1 << ", " << b + 1;

    return 0;
}
