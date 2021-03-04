#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stack;

int main () {
    stack<int> a;
    int f;
    while (true) {
        cin >> f;
        if (f == 0)
            break;
        if (f > 0)
            a.push(f);
        else if (a.empty())
            continue;
        else if (fabs(f) < a.top()) {
            t = a.top();
            t += f;
            a.pop();
            a.push(t);
        }
        else if (fabs(f) >= a.top())
    }
}
