#include <iostream>
#include <cmath>
//#include <stack>
#include <vector>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
//using std::stack;

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
        cout << '|';
    for (int i = 0; i < N; i++)
        cout << '=';
    for (int i = 0; i < M; i++)
        cout << '|';
}
