#include <iostream>
#include <cmath>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void swap (int a, int b);
void merge (int* data1, int* data2, const int size1, const int size2);
void merge_sort (int* data, const int size);

int main () {
    int N;
    cin >> N;

    int* data = new int[N];
    for (int i = 0; i < N; i++)
        cin >> data[i];
    merge_sort (data, N);

    cout << data[N/2];

    return 0;
}

void swap (int a, int b) {
    int f = a;
    a = b;
    b = f;
}

void merge (int* data1, int* data2, const int size1, const int size2) {
    int i = 0;
    int j = 0;
    int* data = new int[size1 + size2];
    while (i < size1 and j < size2) {
        if (data1[i] < data2[j]) {
            data[i+j] = data1[i];
            i++;
        }
        else {
            data[i+j] = data2[j];
            j++;
        }
    }
    if (i == size1) {
        for (; j < size2; j++)
            data[i+j] = data2[j];
    }
    else if (j == size2) {
        for (; i < size1; i++)
            data[i+j] = data1[i];
    }
    i = 0;
    j = 0;
    for (; i < size1; i++) {
        data1[i] = data[i];
    }
    j = i;
    i = 0;
    for (; i < size2; i++) {
        data2[i] = data[j+i];
    }

}

void merge_sort (int* data, const int size) {
    if (size == 2) {
        if (data[1] < data[0])
            swap (data[1], data[0]);
    }
    else if (size > 2) {
        merge_sort(data, size/2);
        merge_sort(data + size/2, size - size/2);
    }

    merge (data, data + size/2, size/2, size - size/2);
}
