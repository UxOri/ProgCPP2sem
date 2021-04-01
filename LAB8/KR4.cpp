#include <iostream>
#include <cmath>
//#include <stack>
//#include <string>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
//using std::string;
//using std::stack;

int main() {
    int N;
    cin >> N;
    int* data = new int[N];
    double S = 0;
    double r = 0;
    for (int i = 0; i < N; i++) {
        cin >> r;
        S += r*r;
    }
    delete []data;
    cout << std::fixed << std::setprecision(4);
    cout << sqrt(S);
}
