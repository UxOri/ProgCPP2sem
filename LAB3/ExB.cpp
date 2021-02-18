#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int N, M, K;
    cin >> N;
    cin >> M;
    cin >> K;

    int** minen = new int*[2];
    minen[0] = new int[K];
    minen[1] = new int[K];

    for (int i = 0; i < K; i++){
        cin >> minen[0][i];
        cin >> minen[1][i];
    }

    int** plan = new int*[N + 2];
    for (int i = 0; i < N + 2; i++) plan[i] = new int[M + 2];

    for (int i = 0; i < N + 2; i++) for (int j = 0; j < M + 2; j++) {
        plan[i][j] = 0;
    }

    for (int i = 0; i < K; i++) {
        plan[ minen[0][i] + 1 ][ minen[1][i]     ] ++;
        plan[ minen[0][i] + 1 ][ minen[1][i] + 1 ] ++;
        plan[ minen[0][i] + 1 ][ minen[1][i] - 1 ] ++;
        plan[ minen[0][i]     ][ minen[1][i] + 1 ] ++;
        plan[ minen[0][i]     ][ minen[1][i] - 1 ] ++;
        plan[ minen[0][i] - 1 ][ minen[1][i]     ] ++;
        plan[ minen[0][i] - 1 ][ minen[1][i] + 1 ] ++;
        plan[ minen[0][i] - 1 ][ minen[1][i] - 1 ] ++;
    }

    for (int i = 0; i < K; i++) {
        plan[ minen[0][i] ][ minen[1][i] ] = -1;
    }

    for (int i = 1; i < N + 1; i++) for (int j = 1; j < M + 1; j++) {
        cout << plan[i][j] << " ";
        if (j == M) cout << endl;
    }

    for (int i = 0; i < N + 2; i++) delete []plan[i];
    delete []plan    ;
    delete []minen[0];
    delete []minen[1];
    delete []minen   ;
    return 0;
}
