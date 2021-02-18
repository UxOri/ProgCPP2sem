#include <iostream>

using std::cout;
using std::cin;
using std::endl;

float mean (const int* data, const int size);

int main() {
    int N;
    cin >> N;
    //int* data = new int[N];
    int data[1000];
    for (int i = 0; i < N; i++) cin >> data[i];
    float m = mean (data, N);

    int S = 0;
    for (int i = 0; i < N; i++) {
        if (data[i] > m) S += data[i];
    }
    cout << S;
    delete []data;

    return 0;
}

float mean (const int* data, const int size) {
    int S = 0;
    for (int i = 0; i < size; i++) S += data[i];
    float M = float(S / size);
    return M;

}
