#include <iostream>
#include <cmath>
#include <string>
#include <queue>
#include "stdlib.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::queue;

queue<int> insertion (queue<int> Q, int id);
bool str_operator (string input, queue<int> Q);

int main () {
    int N;
    cin >> N;
    queue<int> Q;
    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        str_operator (input, Q);
    }

    return 0;
}

queue<int> insertion (queue<int> Q, int id) {
    queue<int> Q_new;
    if (Q.empty())
        Q.push(id);
        return Q;
    int size = Q.size();
    int place = size/2 + 1;
    int* data = new int[size + 1];
    for () //
}

bool str_operator (string input, queue<int> Q) {
    string num_str = "";
    for (unsigned int i = 2; i < input.length(); i++)
        num_str += input[i];

    int id = atoi (num_str.c_str());

    switch (input[0]) {
        case '-':
            cout << Q.front();
            Q.pop();
            break;
        case '*':
            Q = insertion (Q, id);
            break;
        case '+':
            Q.push(id);
        default:
            return 0;
    };
    return 1;
}
