#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int find_max1(int* data, const int size);
int find_max2(int* data, const int size);
int find_max3(int* data, const int size);
int find_max4(int* data);
int* fill_cin (const int size);
int* fill_rnd(const int size);
void print   (int* data);
int size_of_array (int* data);
bool is_in_array_naive (int* data, int x, const int size);
bool is_in_array_binary1 (int* data, int x, const int size);
int* mean_ptr(int* a, int* b);

int main() {
    int* data = fill_cin(5);
    print(data);

    cout << is_in_array_binary1 (data, 10, 5);

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

int* fill_cin (const int size) {
    int* data = new int[size + 1];
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }
    data[size] = -1;
    return data;
}

int* fill_rnd (const int size) {
    srand(time(0));
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

int size_of_array (int* data) {
    int* p;
    for (p = data; *p + 1; p++);
    return p - data;
}

bool is_in_array_naive (int* data, int x, const int size) {
    for (int* p = data; p != data + size; data++)
        if (*data == x)
            return 1;
    return 0;
}

int* mean_ptr(int* a, int* b) {
    return a + (b - a + 1)/2;
}

bool is_in_array_binary1 (int* data, int x, const int size) {
    int* end = data + size;
    while (data + 1 != end) {
        if (*mean_ptr(data, end) > x)
            end = mean_ptr(data, end);
        if (*mean_ptr(data, end) < x)
            data = mean_ptr(data, end);
        else return 1;
    }
    if (*data == x)
        return 1;
    else return 0;
}
