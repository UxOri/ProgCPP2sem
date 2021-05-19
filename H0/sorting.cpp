#include <iostream>
#include <cmath>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void swap (int* data, int a, int b);
void rOR (int* data, const int size);
int findmin (int* data, const int size);
int find_pos (int* data, const int size, int value);
void merge (int* data1, int* data2, const int size1, const int size2);
void merge_sort (int* data, const int size);
void selection_sort (int* data, const int size);
void insertion_sort (int* data, const int size);
void bubble_sort (int* data, const int size);

int main () {
    int data[15] = {1, 2, 7, 3, 0, 10, 9, 8, 5, 4, 123, -123, 2, 1, 1};
    swap(data, 1, 0);
    bubble_sort(data, 15);
    //rOR(data, 10);
    //rOR(data, 10);
    for (int i = 0; i < 15; i++) cout << data[i] << endl;
    //cout << "----------------" << endl;
    //cout << find_pos(data, 10, -1);

    return 0;
}

void swap (int* data, int a, int b) {
    int f = data[a];
    data[a] = data[b];
    data[b] = f;
}

void rOR (int* data, const int size) {
    int f = data[size-1];
    for (int i = size-1; i > 0; i--) {
        data[i] = data[i-1];
    }
    data[0] = f;
}

int find_min (int* data, const int size) {
    int n = data[0];
    int pos = 0;
    for (int i = 0; i < size; i++) {
        if (n > data[i]) {
            n = data[i];
            pos = i;
        }
    }
    return pos;
}

int find_pos (int* data, const int size, int value) {
    if (size == 1) {
        if (value > data[0]){
            return 1;
        }
        else {
            return 0;
        }
    }

    if (size == 2) {
        if (value < data[0])
            return 0;
        else if (value < data[1])
            return 1;
        else
            return 2;
    }
    else if (value > *(data + size/2 + 1)) {
        return size/2 + 2 + find_pos(data + size/2 + 2, size - size/2 - 2, value);
    }
    else if (value < *(data + size/2)    ) {
        return find_pos(data, size/2 - 1, value);
    }
    else {
        return size/2 + 1;
    }
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
            swap (data, 1, 0);
    }
    else if (size > 2) {
        merge_sort(data, size/2);
        merge_sort(data + size/2, size - size/2);
    }

    merge (data, data + size/2, size/2, size - size/2);
}

void selection_sort (int* data, const int size) {
    for (int i = 0; i < size; i++) {
        swap(data, i, find_min(data + i, size - i) + i);
    }
}

void insertion_sort (int* data, const int size) {
    swap(data, find_min(data, size), 0);
    for (int i = 1; i < size; i++) {
        int p = find_pos(data, i, data[i]);
        if (p == i) {
            continue;
        }
        swap(data, i, size - 1);
        rOR(data + p, size - p);
    }
}

void bubble_sort (int* data, const int size) {
    int p = 1;
    while(p != 0) {
        p = 0;
        for (int i = 1; i < size; i++) {
            if (data[i] < data[i - 1]) {
                swap(data, i, i - 1);
                p = 1;
            }

        }
        for (int i = size - 1; i > 0; i--) {
            if (data[i] < data[i - 1]) {
                swap(data, i, i - 1);
                p = 1;
            }
        }
    }
}
