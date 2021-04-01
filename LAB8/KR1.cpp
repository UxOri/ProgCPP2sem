#include <iostream>
#include <cmath>
//#include <stack>
//#include <string>
using std::cin;
using std::cout;
using std::endl;
//using std::string;
//using std::stack;

int main () {
    int M, N;
    cin >> N;
    cin >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0 or j == 0 or i == N - 1 or j == M - 1)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }

}
