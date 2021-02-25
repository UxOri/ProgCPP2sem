#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

int find_max1(int* data, const int size);
int find_max2(int* data, const int size);
int find_max3(int* data, const int size);
int find_max4(int* data);
int* fill_rnd (const int size);
void print (int* data);

int main() {
    int* data = fill_rnd(10);
    print(data);

    return 0;
}

int find_max1(int* data, const int size) {
    if (size == 1) return *data;
    int M = find_max1(data + 1, size - 1);
    return (*data >= M) ? *data:M;
}

int find_max2(int* data, const int size) {
    int M = 0;
    for (int i = 0; i < size; i++) {
        if (*data > M) {
            M = *data;
        }
        data++;
    }
    return M;
}

int find_max3(int* data, const int size) {
    int M = 0;
    int* old_data = data;
    while (data < old_data + size) {
        if (*data > M) {
            M = *data;
        }
        data++;
    }
    return  M;
}

int find_max4(int* data) {
    int M = 0;
    while (*data != -1) {
        if (*data > M) {
            M = *data;
        }
        data++;
    }
    return  M;
}

int* fill_rnd (const int size) {
    srand( time( 0 ) );
    int* data = new int[size + 1];
    for (int i = 0; i < size; i++) {
        data[i] = rand() % 1000;
    }
    data[size] = -1;
    return data;
}

void print (int* data) {
    for(; *data != -1; data++) {
        cout << *data << " ";
    }
    cout << "\n------------------------------------\n";
}
