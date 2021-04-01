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

int main () {
    double H;
    double V;
    cin >> H >> V;
    double t = sqrt(2.0*H/9.81);
    cout << std::fixed << std::setprecision(4);
    cout << t*V;
}
