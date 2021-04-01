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

int main () {
    int N;
    cin >> N;
    vector< vector<int> > A (N, vector<int>(N, 0));
    vector< vector<int> > B (N, vector<int>(N, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> B[i][j];
        }
    }

    vector< vector<int> > C (N, vector<int>(N, 0));
    int S = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            S = 0;
            for (int r = 0; r < N; r++) {
                S += A[i][r]*B[r][j];
            }
            C[i][j] = S;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << C[i][j] << ' ';
        }
        cout << endl;
    }
}

